#include<iostream>
#include<vector>
using namespace std;
void quickSort(vector<int> &arr, int start, int end)
    {
       if(start>=end){
           return;
       }
       int i = start-1;
       int j = start;
       int pivot = end;
       
       while(j<pivot){
           if(arr[j]<arr[pivot]){
               ++i;
               swap(arr[i],arr[j]);
           }
           ++j;
       }
       ++i;
       // i is the right position for the pivot element
       swap(arr[i],arr[pivot]);
       quickSort(arr,start,i-1);
       quickSort(arr,i+1,end);
       
    }
    
int main(){
    vector<int> arr {1,4,2,1,24,2,3,4};
    int start = 0;
    int end  = arr.size()-1;
    quickSort(arr,start,end);
    for (int i = 0; i <=end; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}