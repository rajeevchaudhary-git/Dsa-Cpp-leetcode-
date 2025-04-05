#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int start = 0;
    int  sum = 5;
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
    }



  
}