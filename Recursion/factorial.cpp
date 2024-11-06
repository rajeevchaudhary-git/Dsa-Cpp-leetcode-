#include<iostream>
#include<vector>
using namespace std;
int factorail(int fact){
    if(fact==1 || fact==0){
        return 1;
    }
    return fact * factorail(fact-1);

}
void counting(int n){
if(n==0){
    cout<<"0"<<" ";
    return;
}
counting(n-1);

cout<<n<<" ";
}

void reverseString(string s,int index){
    int n=s.size();
    if(index<0){
        return;
    }
   
    cout<<s[index];
    reverseString(s,index-1);
}



int main(){
    int fact =  5;
    string s ="abcdef";
    int size = s.size()-1;
    // cout<<factorail(fact);
    reverseString(s,size);
}