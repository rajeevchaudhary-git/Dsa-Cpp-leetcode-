#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int sumofminmaxofk(vector<int> &nums, int k)
{
    deque<int> dq, dq2;
    int ans = 0;

    // 1st window
    for (int i = 0; i < k; i++)
    {
        // small element remove krne h
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }

        while (!dq2.empty() && nums[i] <= nums[dq2.back()])
        {
            dq2.pop_back();
        }
        // insert index,so that we can checkout element
        dq.push_back(i);
        dq2.push_back(i);
    }
    // remaining for 1st window
    ans += nums[dq.front()] + nums[dq2.front()];

    // remaining window ko process
    for (int i = k; i < nums.size(); i++)
    {
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }
        if (!dq2.empty() && i - dq2.front() >= k)
        {
            dq2.pop_front();
        }

        // ab free curr element k
        while (!dq.empty() && nums[i] >= nums[dq.back()])
        {
            dq.pop_back();
        }

        while (!dq2.empty() && nums[i] <= nums[dq2.back()])
        {
            dq2.pop_back();
        }
        // insert index,so that we can checkout element
        dq.push_back(i);
        dq2.push_back(i);

        // currnt ka ans
        ans += nums[dq.front()] + nums[dq2.front()];
    }
    return ans;
}
int main()
{
    vector<int> arr{2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << sumofminmaxofk(arr, k);
}