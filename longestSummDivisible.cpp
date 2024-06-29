#include<iostream>
#include<vector>
using namespace std;
int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            int sum=0;
        for(int j=i; j<nums.size(); j++){
            sum+=nums[j];
            cout<<nums[j]<<" ";
            if(sum% k==0){
                count++;
            }
        }
        cout<<endl;
        
        }
        return count;
       
    }

int main(){
   vector<int> nums {2,3};
  cout<< subarraysDivByK(nums,5);

}