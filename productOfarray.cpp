#include<iostream>
#include<vector>
using namespace std;
void productOfarr(vector<int>arr){
    vector<int> ans;
    int tw = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
              if(arr[j]!=arr[i] && j<arr.size()){
                 tw += arr[j]*arr[j+1];

                }
        }
        cout<<tw<<" ";
    }
}
int main(){
vector<int> arr{1,2,3,4};
productOfarr(arr);
}