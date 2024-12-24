#include<iostream>
#include<vector>
using namespace std;
class Heap{
    public:
    int arr[101];
    int size;
    Heap(){
        size = 0;
    }
 void insert(int value){
     // value ko insert ktna hai end mein
     size = size+1;
     int index = size;
     arr[index] = value;

     // iss value right postion par le jana ha sahi postion

     while(index>1){
      int parent_index = index/2;
      if(arr[index]>arr[parent_index]){
        swap(arr[index],arr[parent_index]);

        index = parent_index;
      }
      else{
        break;
      }
     }


  
 };
  void deleteel(){
  // root ko node ki last value se replace karna hai
  arr[1] = arr[size];
  size--;

 //  arr[1]  ko sahi position par lejana hai 
 int index = 1;
 while(index<size){
 int left  = 2*index;
 int right = 2*index+1;
 int largest = index;
 if(left<size && arr[largest]<arr[left]){
  largest = left;
 }
 if(right<size && arr[largest]<arr[right]){
  largest = right;
 }
 if(largest==index){
  return;
 }
 else{
  swap(arr[index],arr[largest]);
  index = largest;
 }
 }

 
 }

 

 

};




void heapfiy(int arr[],int n,int i){   // i is index  n is size of array 
  int index = i;
  int right = 2*i;
  int left = 2*i+1;
  int largest = index;
  if(left<=n && arr[largest]<arr[left]){
  largest = left;
 }
 if(right<=n && arr[largest]<arr[right]){
  largest = right;
 }
 if(largest!=index){
  swap(arr[index],arr[largest]);
   index = largest;
   heapfiy(arr,n,index);
 }
 }


void bulidheap(int arr[],int n){
 
  for(int i=n/2;i>0;i--){
  heapfiy(arr,n,i);
  }
}

void heapsort(int arr[],int size){

  while(size>1){
    swap(arr[size],arr[1]);
    size--;

    heapfiy(arr,size,1);
  }
}

int main(){
Heap h;
// h.arr[0] = -1;
// h.arr[1] = 100;
// h.arr[2] = 50;
// h.arr[3] = 60;
// h.arr[4] = 40;
// h.arr[5] = 45;
// h.size = 5;

int arr[]={-1,12,15,13,11,14};
int n = 6;

bulidheap(arr,n);

heapsort(arr,n);

// cout<<"printing heap "<<endl;
// for(int i=0;i<=h.size;i++){
// cout<<h.arr[i]<<" ";
// }
// h.insert(30);

// h.deleteel();  // in heap always root element is deleted 

cout<<"printing After sorting  heap "<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

}