#include<iostream>
#include<vector>
using namespace std;

    bool canJump(vector<int>& nums) {
        if(nums.size()-1==0 && nums[0]>=0){
            return true;
        }
     for(int i=0;i<nums.size();i++){
        int index = i+nums[i];
        if(i>index){
            return false;
            break;
        }
        if(index>=nums.size()-1){
          return true;
            break;
        }

    }
    return false;
    }

int main(){
    vector<int> arr{0};
    cout<<arr.size();
    // for(int i=0;i<arr.size();i++){
    //     int index = i+arr[i];
    //     if(index>=arr.size()-1){
    //         cout<<i;
    //         break;
    //     }
    // }
}