#include<iostream>
#include<vector>
#include <numeric>

using namespace std;
bool possiblesol(vector<int> arr,int m, int n,int mid){
    int pagesum = 0;
    int c = 1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        
        if(pagesum+arr[i]>mid){
            c++;
            // pagesum = 0;
            pagesum =arr[i];
        }
        
        else{
            pagesum+=arr[i];
        }
        if(c>m){
            return false;
        }
    }
return true;
}


int bookalloacation(vector<int> arr ,int m){
    int n= arr.size();
    if(m>n){
        return -1;
    }
    int start = 0;
    int ans =-1;
    int end = accumulate(arr.begin(),arr.end(),0);
    
    while(start<=end){
        int mid = (start+end)>>1;
        if(possiblesol(arr,m,n,mid)){
           ans = mid;
           end = mid-1;
           cout<<ans<<", ";
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
int main(){
vector<int> arr{12,34,67,90,100,123};
int m = 2;
cout<<bookalloacation(arr,m);
}