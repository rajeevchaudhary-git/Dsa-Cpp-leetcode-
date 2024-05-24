#include<iostream>
#include<string>
using namespace std;
int findchar(string s, char key,int i){
    // cout<<s.length()<<endl;
if(i>=s.length()){
return -1;
}

if(s[i]==key){
    return i;
}
return findchar(s,key,i+1);
}

void findAllOccurences(string s, char key,int i){
    // cout<<s.length()<<endl;
if(i>=s.length()){
return;
}

if(s[i]==key){
    cout<<i<<" ";
}
 findAllOccurences(s,key,i+1);
}


int main(){
string s = "Rajasthan";
int i=0;
char key ='a';
cout<<findchar(s,key,i)<<endl;
findAllOccurences(s,key,i);
}