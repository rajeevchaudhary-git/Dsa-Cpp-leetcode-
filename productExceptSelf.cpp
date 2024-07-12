#include<iostream>
#include<vector>
using namespace std;
vector<int> ProductExecept(vector<int>& nums){
int product = 1;
vector<int> ans(nums.size());
for(int i=0;i<nums.size();i++){
    product*=nums[i];
}
for(int i=0;i<nums.size();i++){
    ans[i] = product/nums[i];
}
return ans;
}

int main(){
    vector<int> arr{1, 2, 3, 4};
    vector<int> ans = ProductExecept(arr);
    // vector<int> ans(arr.size());
    
    // // Loop to calculate the product except self
    // for(int i = 0; i < arr.size(); i++){
    //     int product = 1;
    //     int j = 0;
    //         if(i != j){
    //             product *= arr[j];
    //             j++;
    //         }
    //         j++;
    //         if(j>=arr.size()){
    //          ans[i] = product;
    //          j=0;
            

    //         }
    //     }
    //      // Output the result
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
    }

   

