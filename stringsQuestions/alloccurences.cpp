#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
string txt = "abesdu";
string pat = "edu";
int count=0;
vector<int> ans;
while(true){
int idx = txt.find(pat); 
if(idx==string::npos){
    break;
}
else{
   
    ans.push_back(idx+count);
    count++;
    txt.erase(txt.begin()+idx);
   
    // cout<<idx;
}
}
for(auto answer:ans){
    cout<<answer<<" ";
}
// cout<<txt;
}