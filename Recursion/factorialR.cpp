#include <iostream>
using namespace std;
unsigned long long fact(int n){
    if(n==1)
    return 1;
    return n*fact(n-1);
}
int main(){
int n= 100;
cout<<fact(n);

}