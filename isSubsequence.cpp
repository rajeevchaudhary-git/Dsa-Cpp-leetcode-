#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abc";
    string t = "ahbgdc";
    int i = 0;
    int j = 0;
    string ans =""; 
 
    while(i<t.size() && j<s.size()){
      
        if(t[i]==s[j]){
            ans+=t[i];
            j++;
        }
            i++;
    }

  

    if(ans==s){
        cout<<"true";
    }
    else{
        cout<<false;
    }
    return 0;
}