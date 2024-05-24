#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int slove(vector<int>arr,int target){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini =INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = slove(arr,target-arr[i]);
        if(ans!=INT_MAX){
          mini = min(ans+1,mini);
        }
    }
    return mini;
}
int main(){
vector<int> v{0,2,0,4};
int target = 3;
cout<<slove(v,target);
}