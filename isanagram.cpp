#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool anagram(string s,string t){
    // method no 1;
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    //  if(s==t){
    //     return true;
    //  }
    //  return false;


    // method number two is 
    int count[26]={0};
     for(char x:s){
        count[x-'a']++;
     }
     for(char x : t){
      count[x-'a']--;
     }
     for(int val:count){
        if(val!=0){
            return false;
        }
     }
     return true;
     
     

}
int main(){
string s ="anagram";
string t ="margana";
cout<<anagram(s,t);
// cout<<'z'-'a';

}