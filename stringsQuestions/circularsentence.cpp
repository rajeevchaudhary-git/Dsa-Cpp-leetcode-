#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string ans = "";
    vector<string> s;
    string sentence = "eetcode code";
    for(int i=0;i<=sentence.length();i++){
        if(sentence[i]==' ' || i==sentence.size()){
            s.push_back(ans);
            ans="";
        }
        else{
            ans+=sentence[i];
        }
    }

    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<s.size();
    
    // string temp = s[0];  // first char of vector of string 
    // cout<<temp.back();

cout<<sentence[1];
    

    // int it = 0;
    // while(true){
    //     char temp = s[it].back(); 
    //     if(temp==s[it+1][0]){
    //          cout<<true;
    //          it++;
    //     }
    //     else{
    //         break;
    //     }
    //     if(it==s.size()-1){
    //         if(s[0][0]==s[it].back()){
    //             cout<<true;
    //             break;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    // }
    // cout<<false;


}