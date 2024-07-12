#include<iostream>
#include<vector>
using namespace std;

// a better approach to two pointers 
 vector<int> twoSum2(vector<int>& nums, int target) {
    int s = 0;
     int e = nums.size()-1;    
     while(s<=e){
        if(nums[s]+nums[e]==target){
         return {s+1,e+1};
        }
        else if(nums[s]+nums[e]>target){
            e--;
        }
        else{
            s++;
        }
     
     }
     return {};
 
    }


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
          arr.push_back(s+1);
          arr.push_back(e+1);
          break;
        }
        if(nums[s]+nums[e]!=target){
           
            e--;
        }
     }
    return arr;
    }

int main(){
    vector<int> arr{1,2,3,4,5,6,7};
     vector<int> ans = twoSum2(arr,6);
     
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        
     }
}