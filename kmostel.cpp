#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void kth(vector<int> arr,int k ){
    int maxi = *max_element(arr.begin(), arr.end());
    vector<int> map(maxi+1,0);
    for(int i=0;i<arr.size();i++){
       map[arr[i]]+=1; 
    }
    
    // sort(map.begin(),map.end());
    for(int i =1;i<=2;i++){
        cout<<map[i]<<" ";
    }
}
int main(){
    vector<int> arr{1,1,1,4,4,3};
    kth(arr,2);
}