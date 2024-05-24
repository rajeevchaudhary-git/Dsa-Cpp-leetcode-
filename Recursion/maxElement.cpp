#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void findmax(vector<int> arr ,int i,int& maxi){
    
    if(i>arr.size()-1){
        return;
    }
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    findmax(arr,i+1,maxi);
}
int main(){
    int i = 0;
    int maxi = INT_MIN;
    vector<int> arr{1,2,3,4,56,500};
    findmax(arr,i,maxi);
    cout<<"maximum is number is " <<maxi;
}