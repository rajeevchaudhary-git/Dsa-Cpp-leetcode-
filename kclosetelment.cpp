#include<iostream>
#include<vector>
using namespace std;
// find lower bound 
int lowerbound(vector<int> arr,int x){
    int start = 0;
    int end = arr.size()-1;
    int ans = end;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]>=x){
            ans = mid;
            end = mid-1;
        }
        else if(x>arr[mid]){
            start=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}



// two pointer+binarysearch 
vector<int> bs_ks(vector<int> arr,int k,int x){
    int h = lowerbound(arr,x);
    int l = h-1;
    while(k--){
        if(l<0){
            h++;
        }
        else if(h>arr.size()){
            l--;
        }
        else if(x-arr[l]>arr[h]-x){
            h++;
        }
        else{
            l--;
        }
    }
     vector<int> kelements;
    for(int i=0;i<h;i++){
        kelements.push_back(arr[i]);
    }
    return kelements;
    
}




// two pointer approach 
vector<int> kcloset(vector<int> arr, int k, int x ){
    int low = 0;
    int high = arr.size()-1;
    while(high-low>=k){
        if(x-arr[low]>arr[high]-x){
            low++;
        }
        else{
            high--;
        }
    }
    vector<int> kelements;
    for(int i=low;i<=high;i++){
        kelements.push_back(arr[i]);
    }
    return kelements;
}


int main(){
vector<int> arr{1,2,3,4,5};
int k = 2;
int x = 3;

// vector<int> arr1 = kcloset(arr,k,x);
// for(int i =0;i<arr1.size();i++){
//     cout<<arr1[i]<<" ";
// }

vector<int> arr1 = bs_ks(arr,k,x);
for(int i =0;i<arr1.size();i++){
    cout<<arr1[i]<<" ";
}
}