#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,2,2,1,3,1};
    // find max here max 3 so we create a array of size 3+1; or 3;
    vector<int> map(4,0);
    for(int i=0;i<arr.size();i++){
        map[arr[i]]++;
    }
    for(int i=0;i<map.size();i++){
        cout<<map[i]<<" ";   // it retun count of value that how many times it appear arr array
    }

    // baki ka khud karo.......gande log........................😭😭😭😑😑😑

}