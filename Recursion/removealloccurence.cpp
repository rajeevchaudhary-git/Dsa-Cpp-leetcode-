#include<iostream>
#include<string>
using namespace std;
void removeOccurences(string &s,string &part){
    int found = s.find(part);
    if(found!= string::npos){
        string l = s.substr(0,found);
        string r = s.substr(found+part.size(),s.size());
        s =  l+r;
        removeOccurences(s,part);
    }
}
int main(){
    string s = "van ravan van is the van";
    string part = "van";
    removeOccurences(s,part);
    cout<<s;
    // string l = s.substr(0,3);
    // string r = s.substr(5,s.length()-1);
    // s= l+r;
    // cout<<s;


}