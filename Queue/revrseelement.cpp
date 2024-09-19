#include<iostream>
#include<queue>
#include<stack>

using namespace std;
void reverseQueue(queue<int> & q){
    stack<int> st;
    while(!q.empty()){
        int el = q.front();
        q.pop();
        st.push(el);
    }
    while(!st.empty()){
        int el = st.top(); st.pop();
        q.push(el);
    }
}


void reverserecursion(queue<int> &q){
    if(q.empty()){
        return;
    }

   int el = q.front();
   q.pop();

   reverserecursion(q);

   q.push(el);
}

int main(){
    queue<int> q;
    q.push(6);
    q.push(8);
    q.push(9);
    q.push(10);

    reverserecursion(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}