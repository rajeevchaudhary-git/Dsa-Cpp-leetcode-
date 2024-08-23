#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void getMiddle(stack<int> &s,int &size){
    int temp = s.top();
    if(s.size()==(size/2+1)){
       cout<<"Middle of the stack is : " <<s.top();
    }
    s.pop();
    getMiddle(s,size);

    // backtrack
    s.push(temp);

}

int main(){
   stack<int> s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);
   s.push(70);
   int size = s.size();
   getMiddle(s,size);
}