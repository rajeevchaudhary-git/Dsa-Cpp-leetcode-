#include<iostream>
#include<string>
using namespace std;
int main(){
    char arr[20];
    int i=0;
    for(int i=0;i<10;i++){
        *(arr+i) = 65+i;
        //   arr[i] = 65+i; // does same work 
        // cout<<arr[i];
    }
   
   
    *(arr+i)='\0';

    //  for(int i=0;i<10;i++){
       
    //     cout<<arr[i];
    // }
    cout<<arr;
    return 0;
}