#include<iostream>
#include<string>
using namespace std;
void reverseTheString(string&str,int start,int end){
  if(start>=end){
    
    return;
  }
  swap(str[start],str[end]);
  reverseTheString(str,start+1,end-1);
}
int main(){
string str = "Rajeev";
int start = 0;
int end = str.size()-1;
reverseTheString(str,start,end);
cout<<str;
}