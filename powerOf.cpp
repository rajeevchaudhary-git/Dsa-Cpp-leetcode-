#include<iostream>
#include<vector>
using namespace std;
// Function to calculate power of a number using recursion
double power(double n, double p){
    if(p==0) return 1;
    return n*power(n,p-1);
}
// Function to calculate power of a number using iteration
int powerIter(int n, int p){
    int result = 1;
    for(int i=0;i<p;i++){
        result *= n;
    }
    return result;
}
// Function to calculate power of a number using bit manipulation
double powerBit(double n, int p){
    double result = 1;
       if(p==0) return 1;
    while(p>0){
        if(p%2==1) result *= n;
        p /= 2;
        n *= n;
    }
    return result;
}
int main(){
    double p=2;
    double n = 10.1;
    cout<<powerBit(n,p)<<endl; 

}