#include <iostream>
#include <string>
#include<bits/stdc++.h> 
using namespace std;
bool isPalindrome(string &s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s  = "racecar : ";
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    string ans = "";
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            ans+=s[i];
        }
    }

    cout<<isPalindrome(ans,0,ans.size()-1);
}