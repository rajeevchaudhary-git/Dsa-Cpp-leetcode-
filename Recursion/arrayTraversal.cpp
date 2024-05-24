#include<iostream>
using namespace std;
void arrayTraversal(int arr[],int n ,int i){
 if(i>=n){
    return;
 }
 cout<<arr[i]<<" ";
 arrayTraversal(arr,n,i+1);
}
int main(){
   int arr[3] ={1,3,4};
   arrayTraversal(arr,3,0); 
}