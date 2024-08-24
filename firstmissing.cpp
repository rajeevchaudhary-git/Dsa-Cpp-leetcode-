#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            if(maxi <= nums[i]) {
                maxi = nums[i];
            }
        }

        vector<int> hash(maxi + 1, 0);
        for(int i = 0; i < nums.size(); i++) {
             hash[nums[i]]++;
        }
        
        for(int i = 0; i < hash.size(); i++) {
            cout<<hash[i]<<" ";
        }
        

        return maxi;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 4, -1, 1}; // Example input

    int result = solution.firstMissingPositive(nums);
    cout << "Maximum number in the array: " << result << endl;

    return 0;
}
