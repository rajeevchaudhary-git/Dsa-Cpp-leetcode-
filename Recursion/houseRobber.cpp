#include<iostream>
#include<vector>
using namespace std;
int robHouse(vector<int> arr,int i){
    if(i>=arr.size()){
        return 0;
    }
    int robamount1 = arr[i] + robHouse(arr,i+2);
    int robamount2 = 0 + robHouse(arr,i+1);
    return max(robamount1,robamount2);
}

int robhoouse(vector<int> nums){
    int rob = 0;
        int norob = 0;
        for(int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
}

int main(){
    vector<int> arr{2,8,3,4,7,1};
//    int ans =  robHouse(arr,0);
   cout<<robhoouse(arr);
//    cout<<ans;

}











