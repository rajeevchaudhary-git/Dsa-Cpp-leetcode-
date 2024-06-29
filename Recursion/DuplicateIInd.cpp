#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool coatainduplicate(vector<int> nums, int k)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.count(nums[i]))
        {
            if (i - mp[nums[i]] <= k)
            {
                return true;
            }
            
        
        }
                mp[nums[i]] = i;
    }
    return false;
}
int main()
{
    vector<int> nums{1, 0, 1, 1};
    int k = 1;
    cout << coatainduplicate(nums, k);
}