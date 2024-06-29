#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int> &arr,vector<int> &temp,int s,int mid,int e){
int i = s;
int j = mid+1;
int k = s;
int invCount = 0;

while(i<=mid && j<=e){
    if(arr[i]<=arr[j]){
    temp[k] = arr[i];
    i++;
    k++;
    }
    else
    {
        temp[k]=arr[j];
        j++;
        k++;
        invCount += (mid - i + 1);
    }
}

while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements of right subarray, if any
    while (j <= e) {
        temp[k++] = arr[j++];
    }

    // Copy the sorted subarray into the original array
    for (long p = s; p <= e; p++) {
        arr[p] = temp[p];
    }
    return invCount;

  
}

int mergeSort(vector<int> &arr,vector<int> temp,int s,int e){
int invcount=0;
if(s<e){
int mid = s+(e-s)/2;
invcount+=mergeSort(arr,temp,s,mid);
invcount+=mergeSort(arr,temp,mid+1,e);
invcount+=merge(arr,temp,s,mid,e);
    }
    return invcount;
}

int main(){
    vector<int> arr{4, 5, 13, 2, 12};
    vector<int> temp(arr.size(), 0);
    int s = 0;
    int e = arr.size()-1;
    cout<<mergeSort(arr,temp,s,e);

    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
}