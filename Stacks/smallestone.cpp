#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
vector<int> arr{2,1,4,3};

arr.push_back(2);
arr.push_back(1);
arr.push_back(4);
arr.push_back(3);

stack<int> st;
st.push(-1);

vector<int> ans(arr.size());
for(int i=arr.size()-1;i>=0;i--){
int curr = arr[i];
while(st.top()>=curr){
    st.pop();
}
ans[i]=st.top();
st.push(curr);
}

// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }

for (int i = 0; i <ans.size(); i++)
{
    cout<<ans[i]<<" ";
}

}