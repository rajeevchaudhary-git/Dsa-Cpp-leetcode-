#include<iostream>
#include<string>
using namespace std;
void display(string s){
    cout<<s;
}
string name(){
     string s = "rajeev chaudhary";
     return s;
}
int main(){
    display(name());
}
