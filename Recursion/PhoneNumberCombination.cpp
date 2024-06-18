#include<iostream>
#include<vector>
using namespace std;

void slove( vector<string> &ans,int index,string output, string digits,vector<string> &mapping){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    // 1 case slove 
    int digit = digits[index] -'0';
    string value = mapping[digit];
    //   cout<<index;

    for(int i=0;i<value.length();i++){
      char ch = value[i];
      output.push_back(ch);
      cout<<"outside of recursion"<<endl;
      // recursion
      slove(ans,index+1,output,digits,mapping);
    //   cout<<index;

      // backtrack
      output.pop_back();    
    }
}


int main(){
    string digits = "2";
    int index = 0;
    vector<string> ans;
      if(digits.length()==0){
         return 0;
        }
        string output="";
    vector<string> mapping(10);
   
        mapping[2]="abc";
        mapping[3]="def";
        mapping[4]="ghi";
        mapping[5]="jkl";
        mapping[6]="mno";
        mapping[7]="pqrs";
        mapping[8]="tuv";
        mapping[9]="wxyz";
        
        // cout<<ans.size();
        slove(ans,index,output,digits,mapping);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }

}