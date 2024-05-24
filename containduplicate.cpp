#include<iostream>
#include<vector>
using namespace std;
int conatainduplicate(vector<int> arr){
vector<int> map(arr.size(),0);
for(int i=0;i<arr.size();i++){
    map[arr[i]]++;
}
for(int i=0;i<map.size();i++){
    if(map[i]>1){
        return true;
    }
}
return -1;
}
int main(){
vector<int> arr{1,2,3,4,5,3};
cout<<conatainduplicate(arr);
}