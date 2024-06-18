#include<iostream>
#include<vector>
using namespace std;
int patching(vector<int> nums, int n){
    int miss = 1,added=0,i=0;
    while(miss<=n){
        if(i<nums.size() && nums[i]<=miss){
            miss+=nums[i];
            i++;
        }
        else{
            miss+=miss;
            added++;
        }
    }
    return added;

}
int main(){
vector<int> arr{1,3};
int n = 6;
cout<<patching(arr,n);
}