#include<iostream>
#include<vector>
using namespace std;
void mergeInplace(vector<int> &arr,int s,int mid,int e){
int total_len = e-s+1;
int gap = total_len/2 + total_len % 2;
while(gap>0){
    int i = s;
    int j = s + gap;
    while(j<=e){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
        i++;
        j++;
    }
gap = gap<=1 ? 0 : ( gap/2) + (gap%2);
}
}
void merge(vector<int> &arr, vector<int> &temp,int s,int e,int mid){
int i = s;
int j = mid+1;
int k = s;
while(i<=mid && j<=e){
if(arr[i]<arr[j]){
    temp[k] = arr[i];
    k++;
    i++; 
}
else{
    temp[k]=arr[j];
    k++;
    j++;
}
}

while(i<=mid){
    temp[k]=arr[i];
    k++;
    i++;
}
while(j<=e){
    temp[k]=arr[j];
    j++;
    k++;
}
// modify the orginal array 
for(int i=s; i<=e;i++){
 arr[i]=temp[i];
}

}

// void mergeSort(vector<int> &arr, vector<int> &temp,int s,int e){
// if(s<e){
//     int mid = s+(e-s)/2;
//     mergeSort(arr,temp,s,mid);
//     mergeSort(arr,temp,mid+1,e);
//     merge(arr,temp,s,e,mid);
// }
// }

// inplace sort 
void mergeSort(vector<int> &arr,int s,int e){
if(s>=e){
    return;
}
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    mergeInplace(arr,s,mid,e);

}

int main(){
vector<int> arr{1,3,2,4,7,3};
int s = 0;
int e = arr.size()-1;
// vector<int> temp(arr.size(),0);
mergeSort(arr,s,e);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

}