#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void pushTobottom(stack<int> &s,int &element){
    // base case 
    if(s.size()==0){
        s.push(element);
        return;
    }
    int poped = s.top();
    s.pop();
    pushTobottom(s,element);
    s.push(poped);


}


void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();
    reverse(s);
    pushTobottom(s,target);
}

void insertSorted(stack<int> &s,int target){
    // base case 
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>=target){
        s.push(target);
        return;
    }

    int topel = s.top();
    s.pop();
    insertSorted(s,target);

   // backtrack
    s.push(topel);
}



void sortTheStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int topelement = s.top();
    s.pop();
    sortTheStack(s);
    // backtarck 
    insertSorted(s,topelement);

}



int main(){
 stack<int> s;
 s.push(10);
 s.push(11);
 s.push(12);
 s.push(13);
 s.push(15);
 int el = 14;
 insertSorted(s,el);
 sortTheStack(s);

 while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
 }
}