#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main(){
  
   queue<int> q;
   q.push(3);
   q.push(6);
   q.push(9);
   q.push(12);
   q.push(15);
   q.push(16);
    int k = 10;
    int tempk=k;
   int n = q.size();

    // Edge cases
    if(k==0 || k>n){   
     while(!q.empty()){
     cout<<q.front()<<" ";
     q.pop();
     }

     }

   stack<int> s;
   while(k--){
    s.push(q.front());
    q.pop();
   }

   while(!s.empty()){
    int el = s.top();s.pop();
    q.push(el);
   }

int count = n-tempk;
// cout<<count;
   while(count>0){
    int el = q.front();
    q.push(el);
    q.pop();
    count--;
   }

}