#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum = 0;
    int min = -1;
    int maxsum = -999403; 
    vector<int> arr{1,2,3};
    for(int i =0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum>maxsum){
                maxsum=sum;
            }
            cout<<arr[j]<<" ";
        }
        sum = 0;
        cout<<endl;
    }
    // cout<<maxsum;
}