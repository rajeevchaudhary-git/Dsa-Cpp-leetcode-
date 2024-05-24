#include<iostream>
#include<string>
using namespace std;
void lastOccurence(string str,int & index,int i,char key){
    if(i>=str.length()){
        // cout<<index;
        return;
    }
    if(str[i]==key){
        index=i;
    }
    lastOccurence(str,index,i+1,key);
}


void lastOccurenceRToL(string str,int & index,int i,char key){
    if(i<0){
        // cout<<index;
        return;
    }
    if(str[i]==key){
        index=i;
        return;
    }
    lastOccurenceRToL(str,index,i-1,key);
}
int main(){
string str = "zyiedadmueogrwwew";
char key = 'w';
int i =0;
int index=-1;
// lastOccurence(str,index,i,key);
lastOccurenceRToL(str,index,str.size(),key);
cout<<index;
}