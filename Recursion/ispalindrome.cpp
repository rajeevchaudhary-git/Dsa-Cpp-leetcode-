#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s,int start,int end){
    if(start>end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return ispalindrome(s,start+1,end-1);
}
int main(){
    string s ="racecar";
    int start = 0;
    int end = s.size()-1;
    cout<<ispalindrome(s,start,end);
}