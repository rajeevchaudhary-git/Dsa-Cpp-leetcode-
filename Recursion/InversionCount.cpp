#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,vector<int> temp,int s,int mid,int e){
int i = s;
int j = mid+1;
int k = s;

while(i<=mid && j<=e){
    if(arr[i]<arr[j]){
    temp[k] = arr[i];
    i++;
    k++;
    }
    else
    {
        temp[k]=arr[j];
        j++;
        k++;
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

  
}

void mergeSort(vector<int> &arr,vector<int> temp,int s,int e){
if(s<e){
int mid = s+(e-s)/2;
mergeSort(arr,temp,s,mid);
mergeSort(arr,temp,mid+1,e);
merge(arr,temp,s,mid,e);
    }
}

int main(){
    vector<int> arr{3,4,6,1,6,9,2};
    vector<int> temp(arr.size(), 0);
    int s = 0;
    int e = arr.size()-1;
    mergeSort(arr,temp,s,e);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}