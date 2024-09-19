#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    // temporary queue
      queue<int> temp;
    int n = q.size();
    int mid = n/2;
    int count=0;


    // push first half to temp 
    while(count!=mid){
        int el = q.front();
        temp.push(el);
        q.pop();
        count++;
    }
    count=0;
    while(!q.empty() && !temp.empty()){
          int second  = temp.front();temp.pop();
        q.push(second);
        int first  = q.front(); q.pop();
        q.push(first);
    }
// if queue is odd sized then we have one element left in first halve which is q so wo handle it here 
  if(n&1){
    int el = q.front();q.pop();
    q.push(el);
  }
    

    print(q);

    
}