#include<iostream>
#include <vector>

using namespace std;
 
int subofsubarray(vector<int> arr){
int sum  = 0;
for(int i=0;i<arr.size();i++){
sum+=arr[i];
}
return sum;
}

int main(){
  vector<int> arr{1,2,1,1,1};
  cout<<subofsubarray(arr);  
}