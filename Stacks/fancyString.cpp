#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string s = "leeetcode";
    stack<char> st;
    int countCh=1;
      for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(st.top()==s[i]){
            countCh++;
            if(countCh<3){
                st.push(s[i]);
            }    
        }
        else{
            countCh=1;
            st.push(s[i]);
        }
      }

 string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout<<ans;


    return 0;
}
