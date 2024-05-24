#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>& arr,int s, int e,int key){
    // not found in the array 
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
 /// found in the array 
    if(arr[mid]==key){
        return mid;
    }

    return arr[mid]>key ? (binarysearch(arr,s,mid-1,key)):(binarysearch(arr,mid+1,e,key));
}

int main(){
vector<int> arr{12,23,45,60,23,90};
int s = 0;
int e = arr.size()-1;
int key = 12;
cout<<binarysearch(arr,s,e,key);
}