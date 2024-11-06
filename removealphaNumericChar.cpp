#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
   string s ="12qwhge";
   string charcters = "abcdefghijklmnopqrstuvwxyz";
   for(int i=0;i<s.size();i++){
    int ch =  charcters.find(s[i]);
    if(ch==-1){  //not found 
      cout<<s[i]<<" ";
    }
   
   }

}