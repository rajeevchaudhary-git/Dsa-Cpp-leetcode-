#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int l=0;
    int m=0;
    int h = nums.size()-1;

       while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1){
            
            // l++;
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;

        }
    }
    }
int main(){
vector<int> arr{2,0,1};
sortColors(arr);
for (int i = 0; i <arr.size(); i++)
{
    cout<<arr[i]<<" ";
}

}