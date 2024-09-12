#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s = "()()())))";
    int size = s.length();
    if(size &1 ) cout<< -1;

    stack<char> st;
    for(auto ch:s){
        if(ch=='('){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }

    // stack is still not empty lets count reversal
    int ans=0;
    while(!st.empty()){
        char a = st.top(); st.pop();
        char b  = st.top(); st.pop();
        if(a==b){
            ans+=1;
        } 
        else{
            ans+=2;
        }
    }

    cout<<ans;



}