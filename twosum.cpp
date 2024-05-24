#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
     int s = 0;
     int e = nums.size()-1;    
     vector<int> arr;
     while(s<=nums.size()-1){
        if(e==s){
            e=nums.size()-1;
            s++;
        }
        if(nums[s]+nums[e]==target){
          arr.push_back(nums[s]);
          arr.push_back(nums[e]);
          break;
        }
        if(nums[s]+nums[e]!=target){
           
            e--;
        }
     }
    return arr;
    }

int main(){
    vector<int> arr{3,2,4};
     vector<int> ans = twoSum(arr,6);
     
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        
     }
}