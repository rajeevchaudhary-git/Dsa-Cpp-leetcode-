#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printSubaaray(vector<int>&arr,int start,int end){
    // base case 
    if(end==arr.size()){
        return;
    }
    
    for(int i = start;i<=end;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    printSubaaray(arr,start,end+1);
}
void printsubarrayutil(vector<int>arr){
    for(int start=0;start<arr.size();start++){
        int end = start;
        printSubaaray(arr,start,end);
    }
}
int main(){
    vector<int> arr{1,2,3,4,5,6};
    printsubarrayutil(arr);
   
    // int j = 2;
    // for(int i=0;i<arr.size();i++){
    //     for(int j=i;j<arr.size();j++){
    //      for(int k=i;k<j;k++){
    //         cout<<arr[k]<<" ";
    //      }
    //     }
    //      cout<<endl;
      
    // }
   
}