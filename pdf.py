import fitz  # PyMuPDF
from reportlab.pdfgen import canvas
from reportlab.lib.pagesizes import letter
from io import BytesIO
import os

def compress_pdf(input_pdf_path, output_pdf_path, target_size_kb=100):
    # Open the original PDF
    pdf_document = fitz.open(input_pdf_path)
    
    # Iterate through each page and compress
    for page_num in range(len(pdf_document)):
        page = pdf_document.load_page(page_num)
        
        # Reduce the resolution of the page
        zoom_x = 0.5  # Zoom out 50% to reduce resolution
        zoom_y = 0.5
        mat = fitz.Matrix(zoom_x, zoom_y)
        pix = page.get_pixmap(matrix=mat)
        
        # Save the pixmap to buffer
        img_buffer = BytesIO(pix.tobytes(output="png"))
        
        # Create a new PDF with the reduced image
        packet = BytesIO()
        c = canvas.Canvas(packet, pagesize=letter)
        c.drawImage(BytesIO(pix.tobytes(output="png")), 0, 0, width=letter[0], height=letter[1])
        c.showPage()
        c.save()
        
        # Load the new PDF page and replace the original page
        packet.seek(0)
        new_page_pdf = fitz.open("pdf", packet.read())
        new_page = new_page_pdf.load_page(0)
        pdf_document[page_num] = new_page
    
    # Save the compressed PDF
    pdf_document.save(output_pdf_path, deflate=True)
    
    # Check the size of the compressed PDF
    compressed_size_kb = os.path.getsize(output_pdf_path) / 1024
    print(f"Compressed PDF size: {compressed_size_kb:.2f} KB")
    
    # Retry with lower resolution if necessary
    if compressed_size_kb > target_size_kb:
        compress_pdf(input_pdf_path, output_pdf_path, target_size_kb)

# Usage example
input_pdf_path = "2.pdf"
output_pdf_path = "output_compressed.pdf"
compress_pdf(input_pdf_path, output_pdf_path, target_size_kb=100)
