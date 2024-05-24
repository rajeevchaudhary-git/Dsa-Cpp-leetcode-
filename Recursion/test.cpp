#include<iostream>
using namespace std;
void praymid(int n){
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(j%2==0){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}
int main(){
int n=10;
praymid(n);
}