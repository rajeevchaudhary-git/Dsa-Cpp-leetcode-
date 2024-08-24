#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
   vector<int> arr{1,3,1};
   int start = 0;
   int k =1;
    int second = start+1;
    int diff=0;
   while(k<=0){
   
    // cout<<arr[start]<<" "<<arr[second]<<endl;
    diff = (arr[start]-arr[second]);
    second=second+1;
    if(second==arr.size()){
        start=start+1;
        second = start+1;
    }
   }
 
cout<< diff;
    
}