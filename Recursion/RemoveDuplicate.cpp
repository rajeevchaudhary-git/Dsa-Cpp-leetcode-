#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;
int main(){
    vector<int> arr{0,0,0,1,1,2};
int maxi = *max_element(arr.begin(), arr.end());
    vector<int> map(maxi+1);
    for(int i=0;i<arr.size();i++){
        map[arr[i]]++;
    }

    for(int i=0;i<map.size();i++){
        int j=map[i];
        if(map[i]>2){
            while(j>2){
             
            }
        }
    }

    

}