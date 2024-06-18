#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={1,2,3,4,
                   10,2,14,10,
                   90,100,120,12,
                   20,23,25,26};
                   
                   int i=0;
                   int j=2;
                //    cout<<arr[i+1][j-1];
   for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}