#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int dividend,int divisor){
int start = 0;
int end = abs(divisor);
int ans = 0;
while(start<=end){
    int mid = start+(end-start)/2;
    if(abs(dividend*mid)==abs(divisor)){
        ans= mid;
        break;
    }
    if(abs(dividend*mid)<abs(divisor)){
      ans = mid;
      start = mid+1;
    }
    else{
    end = mid-1;
    }
    mid = start+(end-start)/2;
}
if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
        return ans;
    } else {
        return -ans;
    }

   
}
int main(){
int divisor = 65;  // divided 
int dividend = 4;  // divided by 
// expected output 2 
cout<<binarysearch(dividend,divisor);
}