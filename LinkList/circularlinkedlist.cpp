#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* tail;  // We'll keep a pointer to the last node (tail)

public:
    CircularLinkedList() : tail(nullptr) {}

    // Function to add a new node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            // If the list is empty, point the new node to itself
            tail = newNode;
            tail->next = tail;
        } else {
            // Insert the new node after the tail and update the tail
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Function to display the elements of the list
    void display() {
        if (tail == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* current = tail->next;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != tail->next);
        std::cout << std::endl;
    }

    // Function to delete a node from the list
    void deleteNode(int key) {
        if (tail == nullptr) {
            std::cout << "List is empty. Nothing to delete." << std::endl;
            return;
        }

        Node* current = tail->next;
        Node* prev = tail;

        // If the list contains only one node
        if (tail == tail->next && tail->data == key) {
            delete tail;
            tail = nullptr;
            return;
        }

        // If the key is found at the head
        if (current->data == key) {
            prev->next = current->next;
            delete current;
            return;
        }

        // Search for the key in the list
        do {
            prev = current;
            current = current->next;

            if (current->data == key) {
                prev->next = current->next;
                if (current == tail) {
                    tail = prev;  // Update the tail if needed
                }
                delete current;
                return;
            }
        } while (current != tail->next);

        std::cout << "Node with value " << key << " not found." << std::endl;
    }

    // Destructor to free memory
    ~CircularLinkedList() {
        if (tail == nullptr) return;

        Node* current = tail->next;
        Node* nextNode;
        do {
            nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != tail->next);

        tail = nullptr;
    }
};

void isCircular(Node *head){
    
}



int main() {
    CircularLinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    std::cout << "Circular Linked List: ";
    list.display();

    list.deleteNode(20);
    std::cout << "After deleting 20: ";
    list.display();

    list.deleteNode(40);
    std::cout << "After deleting 40: ";
    list.display();

    list.deleteNode(10);
    std::cout << "After deleting 10: ";
    list.display();

    list.deleteNode(30);
    std::cout << "After deleting 30: ";
    list.display();

    return 0;
}
