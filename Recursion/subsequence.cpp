#include<iostream>
#include<string>
using namespace std;
void printsubsequence(string s,string output,int i){
    if(i>=s.length()){
        cout<<output<<endl;
        return;
    }
    //exculde
    printsubsequence(s,output,i+1);
    //include 
    output.push_back(s[i]);
    printsubsequence(s,output,i+1);
}
int main(){
    string s = "xyc";
    int i =0;
    string output=" ";
    printsubsequence(s,output,i);
}