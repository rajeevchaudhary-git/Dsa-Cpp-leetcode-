#include<iostream>
#include<string>
using namespace std;
void PrintPremutation(string& s,int i){
    // base case 
    if(i>=s.length()){
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        //recursion call 
        PrintPremutation(s,i+1);
        //backtracking
        swap(s[i],s[j]);  // if string is passed by refernce then we need backtracking 
    }
    
}
int main(){
    string s = "abc";
    int i=0;
    PrintPremutation(s,i);
    // cout<<s;
    
}