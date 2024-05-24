#include<iostream>
#include <cstring>
using namespace std;
void UpperCase(char arr[]){
    int n = strlen(arr);
    for(int i =0; i<n;i++){
        if(arr[i]>='a' && arr[i]<='z'){  // ignoring the character already in uppercase
         arr[i] = arr[i] - 'a' +'A';   // just interchange the sign to get lowercase function
         cout<<arr[i]<<"";
    }
    else{
        cout<<arr[i];
    }
        }
       
}
int main(){
char arr[100]="SWell Kumar";
UpperCase(arr);
}