#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        // first iteration 
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
vector<int> arr{10,2,1,5,30,2};
int n = arr.size();

// cout<<"helo";
bubblesort(arr,n);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}