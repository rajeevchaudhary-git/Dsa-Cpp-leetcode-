#include<iostream>
#include<vector>
using namespace std;
int removeelement(vector<int> arr,int val){
    int index = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=val){
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
int main(){
    vector<int> arr{3,2,2,3};
     cout<<removeelement(arr,3);
    
}