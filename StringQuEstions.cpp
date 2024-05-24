#include<iostream>
#include<string>
using namespace std;

/// remove dupliacte ajacent charcater from string 
string removeDuplicates(string s){
    string arr ="";
    int i =0;
   while(i<s.length()){
     if(arr.length()>0){
        if(arr[arr.length()-1]==s[i]){
            arr.pop_back();
        }
        else{
            arr.push_back(s[i]);
        }
        
     }
     else{
        arr.push_back(s[i]);
     }
     i++;
   }
   return arr;
}


// second version of dupliacte removal 
// this is give run time error in leet code 
string removeDuplicates2(string s){
    int i =1;
    string arr ="";
    arr.push_back(s[0]);
   while(i<s.length()){
     
        if(arr[arr.length()-1]==s[i]){
            arr.pop_back();
        }
        else{
            arr.push_back(s[i]);
        }
          i++;
     }
    
   return arr;
   }


//question id = 2  remove all occurences of given string
string removeOccurence(string s,string part){
    int pos = s.find(part);
    while(pos!=string::npos){
        s.erase(pos,part.length());
        pos = s.find(part);
    }
    return s;
}


// function for check is palindrome

bool isspalindrome(string s,int i, int j){
    // int i = 0;
    // int j = s.length()-1;

    while(i<=j){
        if(s[i]!=s[j]){
           return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

// question 3  
// iss palindrome if remove a character 
bool isPalindromeAfterReemoval(string s){
    int i = 0;
    int j = s.length()-1;
    while (i<=j)
    {
        if(s[i]!=s[j]){
         if(isspalindrome(s,i+1,j) || isspalindrome(s,i,j-1)){
            return true;
         }
         else{
            return false;
         }
        }
        else{
            i++;
            j--;
        }
        return true; 
    }
    
}

// question number 5
// palindrome check substring
int expandAroundIndex(string s, int i, int j){
           int count=0;
           while(i>=0 && j<s.length() && s[i]==s[j]){
               count++;
               i--;
               j++;
           }
           return count;
       }
// count the substring 
    int countSubstrings(string s) {
        int count=0;
        int n= s.length();
        for(int i=0; i<n; i++){
            //odd
            int oddAns= expandAroundIndex(s, i, i);
            count= count+oddAns;
            //even
            int evenAns=expandAroundIndex(s,i,i+1);
            count= count+evenAns;
        }
        return count;
    }





int main(){
 string s = "abc";
 string part = "ab";               // form question number 2 
//  cout<<removeDuplicates(s);        question no 1 
//  cout<<removeOccurence(s,part);   question no 2
// cout<<isPalindromeAfterReemoval(s);
cout<<countSubstrings(s);
}