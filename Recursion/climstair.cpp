#include<iostream>
#include<vector>
using namespace std;
int climbStairs(int i,int n){
    if(i>n){
        return 0;
    }
    if(i==n){
        return 1;
    }
    return climbStairs(i+1,n)+climbStairs(i+2,n);
}
int main(){
int n =10;
int i = 0;
cout<<climbStairs(i,n);
}