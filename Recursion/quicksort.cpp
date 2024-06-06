#include<iostream>
using namespace std;
int partittion(int arr[],int s,int e){
// step one 
// choose pivot element 
int pivotindex = s;
int pivotElement = arr[s];

// step 2 find right postion for pivot element and place 
int count = 0;

for(int i =s+1; i<=e;i++){
    if(arr[i]<=pivotElement){
        count++;
    }
}
// jab main loop se bahar aaaya toh mera pass 
// pivot ki right postion ke index ready h
int rightindex = s+count;
swap(arr[pivotindex],arr[rightindex]);
pivotindex = rightindex;

// step 3 left meinc chota right mein bada 
int i =s;
int j=e;
while(i<pivotindex && j>pivotindex){
  while(arr[i]<=pivotElement){
    i++;
  }
  while(arr[j]>pivotElement){
    j--;
  }

  // 2case 
    // element to swap 
    // no need to swap
    if(i<pivotindex && j>pivotindex){
        swap(arr[i],arr[j]);
    }
}
return pivotindex;


}


void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    // partittion logic
    int p = partittion(arr,s,e);

    //recursive calls 
    //left
    quickSort(arr,s,p-1);

    // right 
    quickSort(arr,p+1,e);

}
int main(){
int arr[] = {8,1,3,4,20,50,30};
int n= 7;
int s = 0;
int e = n-1;
quickSort(arr,s,e);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}