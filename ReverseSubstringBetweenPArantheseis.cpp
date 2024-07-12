#include<iostream>
#include<vector>
using namespace std;
void reverseStr(string &s,int start,int end){
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}


int main(){
   string s = "(ed(et(oc))el)";
   vector<int> arr;
   for(int i=0;i<=s.length();i++){
    if(s[i]=='('){
        arr.push_back(i);
    }
    else if(s[i]==')'){
        reverseStr(s,arr[arr.size()-1]+1,i-1);
        arr.pop_back();
    }
   }

 for(int i=0;i<s.length();i++){
    if(s[i]!=')' && s[i]!='('){
        cout<<s[i]<<" ";
    }
 }
   
}