#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int getMax(vector<int> &arr, int start,int end){
     int maxi = INT_MIN;
     for(int i=start;i<=end;i++){
        if(arr[i]>=maxi){
            maxi = arr[i];
        }
     }
     return maxi;
   }

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> arr;
        int i = 0;
        while(i+k<nums.size()){
          int maxelement = getMax(nums,i,i+k);
          arr.push_back(maxelement); 
        }
        return arr;
    }

int main(){
   vector<int> arr{1,3,1,1};
   int k = 3;
  vector<int> ans =  maxSlidingWindow(arr,k);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}