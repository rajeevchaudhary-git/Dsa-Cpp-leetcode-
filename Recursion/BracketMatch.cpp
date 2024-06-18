#include<iostream>
#include<vector>
using namespace std;

void slove(vector<string> &ans,int n,int open,int close,string output){
    if(open==0 && close==0){
        ans.push_back(output);
    }
    if(open>0){
        output.push_back('(');
        slove(ans, n,open-1,close,output);
        // backtarck 
        output.pop_back();
    }
    // include close bracket
    if(close>open){
        output.push_back(')');
         slove(ans, n,open,close-1,output);
         // backtarck 
        output.pop_back();


    }
  }
int main(){
    int n=4;
  vector<string> ans;
        int open =  n;
        int close = n;
        string s="";
        slove(ans,n,open,close,s);
        for (int i = 0; i <ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        
}