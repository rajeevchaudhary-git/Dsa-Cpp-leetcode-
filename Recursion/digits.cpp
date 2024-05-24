#include<iostream>
using namespace std;
void digit(int n){
    if(n==0){
        return;
    }
    int digitt = n%10;
    digit(n/10);
    cout<<digitt<<" ";
}
int main(){
int n = 647;
cout<<n<<endl;
// digit(n);
}