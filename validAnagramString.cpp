#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool validanagram(string s,string t){
  sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    return false;
}
// version 2 time complaxity o(n)
bool validaanagram2(string s,string t){
    int hashmap[256]={0};
    for(int i=0;i<s.size();i++){
        hashmap[s[i]]++;
    }
    for(int i=0;i<t.size();i++){
        hashmap[t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(hashmap[i]!=0){
            return false;
        }
    
    }
    return true;

}
int main(){
    string s = "cat";
    string t = "cat";
    cout<<validaanagram2(s,t);
   
   
    
    }
    
    
    
