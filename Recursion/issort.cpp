#include<iostream>
#include<vector>
using namespace std;
bool issort(vector<int> arr,int i){
if(i>=arr.size()-1){
    return true;
}
if(arr[i+1]<arr[i]){
   return false;
}
return issort(arr,i+1); 
}
int main(){
vector<int> arr{1,2,3,4,5,6,6,6,6,10,6,6,6,9};
int i =0;
cout<<issort(arr,i);
}