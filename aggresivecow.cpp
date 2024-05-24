#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isspossible(vector<int> stalls,int k,int mid){
    int counter = 1;
    int pos = stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-pos>=mid){
            counter++;
            pos = stalls[i];
        }
        if(counter==k){
            return true;
        }
    }
    return false;
}
int aggresiveCow(vector<int>stalls,int k){
    sort(stalls.begin(),stalls.end());
    int start = 0;
    int end = stalls[stalls.size()-1]-stalls[0];
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isspossible(stalls,k,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }

    }
    return ans;
}
int main(){
vector<int> arr{1,2,4,8,9};
int k = 3;
cout<<aggresiveCow(arr,k);
}