#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str ="This is string";
    // cin>>str;   // this is will ingore all the charcater after the spaces 
    // getline(cin,str);   // thats why we use get line to input the string 

    // str.back() = '3';  // add  something into the end of the string 
  
    // for(auto i =str.begin(); i<str.end();++i){
    //   cout<<*i<<"";
    // }

    // cout<<"IS EMPTY: " <<str.empty();  // it return ture or false 
    //   str.push_back('2');   // add 2 at the end of the string 
    //    str.pop_back();      // remove  2 at the end of the string 
    //    cout<<str.substr(0,4)<<  endl;  // slicing of string 


    string a = "love";
    string b = "Love";
    if(a.compare(b)==0){
        cout<<"Both a and b are same string..."<<endl;
    }
    else{
        cout<<"both are diffrent strings!!!"<<endl;
    }
    cout<<str.find("string");   // return first index of required string 
    str.replace(0,4,"that");    // it will replace the string from 0 to 4 from that
    cout<<str;

}