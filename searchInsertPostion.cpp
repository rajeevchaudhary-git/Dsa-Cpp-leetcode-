#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int s =0;
        int e = nums.size()-1;
        while(s<=e){
        int mid = s+(e-s)/2;
         if(nums[mid]==target){
            return mid;
         }
         if(nums[mid]>target){
            e=mid-1;
         }
         else{
            s=mid+1;
         }

        }
        return s;
    }
    // not useful 

int serachPostion(vector<int> nums ,int target){
for(int i=0;i<nums.size();i++){
    if(nums[i]>=target){
        return i-1;
    }
    else if(nums.size()<target){
        return nums.size();
    }
}
return -1;

}

int main(){
vector<int> arr{1,3,5};
int postion = searchInsert(arr,4);
cout<<postion;
}