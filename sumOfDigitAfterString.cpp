#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
   string s = "leetcode";
   vector<int>arr;
   for(int i=0;i<s.length();i++){
    arr.push_back(s[i]);
   }
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }

}