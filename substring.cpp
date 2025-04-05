#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "abc";
   for(int i=0;i<s.size();i++){
    for(int j=i;j<s.size();j++){
        for(int k=i;k<=j;k++){
            cout<<s[k];
        }
        cout<<endl;
    }
   }
}