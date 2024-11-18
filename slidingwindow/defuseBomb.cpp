#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> code {5,7,1,4};
    int k = 3;
    vector<int> ans;
    
    for(int i=0;i<code.size();i++){
       
        int sum = 0;
       int j=i+1;
       int count = k;
        while(count--){
        if(j>=code.size()){
            j=0;
        }
        sum+=code[j];
        j++;
        
        }
        ans.push_back(sum);
        
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}