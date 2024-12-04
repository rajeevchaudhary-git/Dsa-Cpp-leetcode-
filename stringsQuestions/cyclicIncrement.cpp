#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string str1 = "ztc";
    string str2 = "ad";
     int i=0;
    while(i<str2.length()){
        // if(str2[i]=='a' ){

        // }
     int ch1 = str1.find(str2[i]);
     int ch2 = str1.find(str2[i]-1);
     if(str2[i]=='a' && ch1==-1){
        ch1 = str1.find('z');
     }
     if(str2[i]=='z' && ch1==-1){
        ch1 = str1.find('a');
     }
     cout<<"found in first "<<ch1<<endl;
     cout<<"found in second "<<ch2<<endl;
     if(ch1!=-1 || ch2!=-1){
      i++;
     }
     else{
        cout<<"not possible"<<endl;
        break;
     }
    }
     cout<<"true";
    cout<<'a'-2<<endl;
    cout<<'z'+1<<endl;





}