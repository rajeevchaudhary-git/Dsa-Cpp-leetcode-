#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MakeArrayUni(vector<int> &nums){
    sort(nums.begin(),nums.end());
    int ans=0;
    for(int i=1;i<nums.size();i++){
        int moves = 0;
      if(nums[i]<=nums[i-1]){
    //    moves = nums[i]-nums[i-1]+1;
       moves = nums[i-1]-nums[i]+1;
       nums[i]+=moves;
       ans+=moves;
    
      }
      
    }
    return ans;

}
int main(){
    vector<int> arr{1,3,3,3,2};
    cout<<MakeArrayUni(arr)<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


