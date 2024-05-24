#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    vector<int> arr{1,1,1,1,1};
    int i=0;
    int j=1;
    int k = 0;
    sort(arr.begin(),arr.end());
    set<pair<int,int>> distinct;
    while(j<arr.size()){
        int diff  = abs(arr[j]-arr[i]);
        if(diff==k){
            distinct.insert({arr[i],arr[j]});
            ++i;
            ++j;
        }
        
        else if(diff>k){
            i++;
        }
        else{
            j++;
        }
        if(j==i){
            j++;
        }
    }
    cout<<"number of distinct pairs is "<<distinct.size();
}