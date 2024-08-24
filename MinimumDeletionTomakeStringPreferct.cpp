#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
   
   string s =  "bbaaaaabb";
   string stack;
   for(int i=0;i<s.size();i++){
    if(stack.empty()){
      stack.push_back(s[i]);
    }
    else if(stack[stack.size()-1]==s[i]){
        stack.push_back(s[i]);
    }
    else if(s[i]==s[i+1]){
        stack.push_back(s[i]);
    }
   }
  for(int i=0;i<stack.size();i++){
    if(stack[0]=='b'){
        
    }
  }
   cout<<s.size()-stack.size();

// cout<<counter;
}