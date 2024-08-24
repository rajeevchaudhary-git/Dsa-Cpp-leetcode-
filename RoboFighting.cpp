#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> postions{3,5,2,6};
   vector<int> power{10,10,15,12};
   string direction = "RLRL";
   string temp = "";
   vector<int> ans;
   temp.push_back(direction[0]);
   
   for(int i=0;i<postions.size();i++){
    if(direction[i]=='R'){
     temp.push_back(direction[i]);
     ans.push_back(power[i]);
    }
    else if(direction[i]!=direction[i-1]){
     if(power[i]>power[i-1]){
        postions.erase(postions.begin()+(i-1));
        power[i] = power[i]-1;
        ans.push_back(power[i]);
     }
     else if(power[i]<power[i-1]){
        postions.erase(postions.begin()+(i));
        power[i-1] = power[i-1]-1;
        ans.push_back(power[i-1]);
     }
     else{
        postions.erase(postions.begin()+(i));
        postions.erase(postions.begin()+(i-1));
     }
   
    }
    else{
        ans.push_back(power[i]);
        ans.push_back(power[i-1]);
     }
   }

   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
   
    return 0;
}