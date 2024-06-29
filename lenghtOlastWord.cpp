#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
void trim(string &s) {
    // Remove leading spaces
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
    // Remove trailing spaces
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), s.end());
}

void trimTrailingSpaces(string &s) {
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), s.end());
}

int main(){
string s  = "   fly me   to   the moon  ";
// trim(s);
int count = 0;
trimTrailingSpaces(s);
for(int i=s.size()-1;i>=0;i--){
if(s[i]!=' '){
    count++;
}
else{
    break;
}
}
cout<<count;




}