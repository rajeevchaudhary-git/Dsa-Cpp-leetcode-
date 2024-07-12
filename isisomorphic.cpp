#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
void isIsomorphic(string s, string t) {
    unordered_map<char,int> s_store;
    unordered_map<char,int> t_store;
    int storessum = 0;
    int storeTsum = 0;
    for(int i=0;i<s.size();i++){
        s_store[s[i]]++;
        storessum+=s_store[s[i]];
    }
    for(int i=0;i<t.size();i++){
        t_store[t[i]]++;
        storeTsum+=t_store[t[i]];
    }
    
cout<<"sum of s is "<<storessum<<endl;
cout<<"sum of t is "<<storeTsum<<endl;

 }
int main(){
string s = "egg";
string t = "add";
isIsomorphic(s,t);

}
