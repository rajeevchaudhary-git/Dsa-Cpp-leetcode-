#include<iostream>
#include<vector>
using namespace std;

int buySellStock(vector<int>& prices) {
    int profit = 0;
    int n = prices.size();
    
    // Check if the prices vector has at least two elements
    if (n < 2)
        return profit;
    
    int buy = 0;
    int sell = 0;
    
    for (int i = 1; i < n; i++) {
        // Look for local minima
        while (i < n && prices[i] <= prices[i - 1]) {
            i++;
        }
        buy = prices[i - 1];
        
        // Look for local maxima
        while (i < n && prices[i] >= prices[i - 1]) {
            i++;
        }
        sell = prices[i - 1];
        
        profit += sell - buy;
    }
    return profit;
}

int main() {
    vector<int> arr {1, 2, 3, 4, 5};
    cout << buySellStock(arr);
    return 0;
}
