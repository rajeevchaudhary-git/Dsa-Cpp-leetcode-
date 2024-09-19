#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums{1,4,3,2};
    sort(nums.begin(),nums.end(), [](int &a, int &b){ return a>b; });
    int len = nums.size();
    for(int i=0;i<len;i++){
       cout<<nums[i]<<" ";
    }
    
   
}