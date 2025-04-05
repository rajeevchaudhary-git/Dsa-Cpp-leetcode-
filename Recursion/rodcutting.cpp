#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int rodCutting(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int a = rodCutting(n - x, x, y, z);
    int b = rodCutting(n - y, x, y, z);
    int c = rodCutting(n - z, x, y, z);
    int res = max(a, max(b, c));
    if (res == -1)
    {
        return -1;
    }
    return res + 1;
  
}


int rodCuttingMem(int n, int x, int y, int z, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int a = rodCuttingMem(n - x, x, y, z, dp);
    int b = rodCuttingMem(n - y, x, y, z, dp);
    int c = rodCuttingMem(n - z, x, y, z, dp);
    int res = max(a, max(b, c));
    if (res == -1)
    {
        return dp[n] = -1;
    }
    return dp[n] = res + 1;
}


int rodCuttingTab(int n, int x, int y, int z) {
    vector<int> dp(n + 1, -1);
    dp[0] = 0;  // Base case

    for (int i = 1; i <= n; i++) {
        if (i >= x && dp[i - x] != -1) {
            dp[i] = max(dp[i], dp[i - x] + 1);
        }
        if (i >= y && dp[i - y] != -1) {
            dp[i] = max(dp[i], dp[i - y] + 1);
        }
        if (i >= z && dp[i - z] != -1) {
            dp[i] = max(dp[i], dp[i - z] + 1);
        }
    }

    return dp[n] == -1 ? 0 : dp[n];
}


int main()
{

    int n = 5;
    int x=3;
    int y=2;
    int z=2;
    
    vector<int> dp(n + 1, -1);
    // cout << rodCutting(n, x, y, z);
    cout << rodCuttingTab(n, x, y, z);
    // cout << rodCuttingMem(n, x, y, z,dp);
}