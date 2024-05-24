#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr ,int target){
int s  = 0;
int e = arr.size()-1;
int mid = s+(e-s)/2;
while (s<=e)
{
   mid = s+(e-s)/2;

   if(arr[mid]==target){
    return mid;
   } 
   if(arr[mid]<target){
    s = mid+1;
   }
   else{
    e = mid-1;
   }
}
return -1;

}
int main(){
    vector<int>  arr{1,2,3,4,5,6,7};
    int target = 6;
    cout<<binarysearch(arr,target);
}