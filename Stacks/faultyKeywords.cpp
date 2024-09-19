#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    string s = "poiinter";
    stack<char> st;
    string ans = "";
    // st.push(s[0]);
    for(auto ch : s) {
        if(ch == 'i') {
           
            while(!st.empty()) {
                ans += st.top();
                st.pop();
            }
         for(auto an:ans){
            st.push(an);
         }
         ans="";

        } else {
            
            st.push(ch); 
        }
    }

    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }

reverse(ans.begin(),ans.end());
cout<<ans;
    return 0;
}
