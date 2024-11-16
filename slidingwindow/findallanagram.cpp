#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isanagram(string &s,int st,int end,string p){
string temp;
for(int i=st;i<=end;i++){
    temp.push_back(s[i]);
}
   for(int i=0;i<temp.size();i++){
    if(temp.find(p[i])==string::npos){
        return false;
    }
   }
   return true;
}
int main(){
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> arr;
    for(int i=0;i<=s.size()-p.size();i++){
        if(isanagram(s,i,i+p.size()-1,p)){
            arr.push_back(i);
        }
    }

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}    

}