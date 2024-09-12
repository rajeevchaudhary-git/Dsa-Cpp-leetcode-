#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevSmaller(vector<int> arr){
   stack<int> st;
   st.push(-1);
   vector<int> ans;
   for(int i=0;i<arr.size();i++){
     while(st.top()>=arr[i]){
     st.pop();
     }
     ans.push_back(st.top());
     st.push(arr[i]);
       
  }
  return ans;
}


vector<int> nextSmaller(vector<int> arr){
stack<int> st;
 st.push(-1);
 vector<int> ans;
  for(int i=arr.size()-1;i>=0;i--){
     while(st.top()>=arr[i]){
     st.pop();
     }
     ans.push_back(st.top());
     st.push(arr[i]);
       
  }
  return ans;
}

vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    vector<int> ans(prices);  // Initialize answer with original prices
    stack<int> st;  // Stack to track indices where discount hasn't been applied

    for (int i = 0; i < n; i++) {
        // While stack is not empty and the top price is greater than or equal to current price
        while (!st.empty() && prices[st.top()] >= prices[i]) {
            // Apply discount
            int idx = st.top();
            ans[idx] = prices[idx] - prices[i];
            st.pop();  // Remove the index from stack
        }
        // Push the current index onto the stack
        st.push(i);
    }

    return ans;
}

int main() {
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> result = finalPrices(prices);

    // Print the final prices after discount
    for (int price : result) {
        cout << price << " ";
    }

    return 0;
}