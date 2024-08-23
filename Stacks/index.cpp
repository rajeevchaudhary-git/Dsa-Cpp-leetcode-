#include<iostream>
#include<vector>
using namespace std;

class Stack{
    private:
    int size;
    char *arr; 
    int top;

 public:
  Stack(int size){
    arr = new char[size];
    this->size = size;
    top = -1;
  }

// push element 
  void push(char data){
  if(size-top>1){
    top = top+1;
    arr[top] = data;
  }
  else{
    cout<<"Stack overflow";
  }

  }

// pop element 
  void pop(){
  if(top==-1){
    cout<<"Stack Underflow";

  }
  else{
    top = top-1;
  }

  }

// get top 
  char getTop(){
   if(top!=-1){
    return arr[top];
   }
   else{
    cout<<"Stack is Underflow";
   }
  }

// get size
  int  getSize(){

    return top+1;

  }

// is empty 
bool isempty(){
if(top==-1){
    return true;
}
else{
   return false;
}
}
 


};


int main(){
  string st  = "leetcode";
  Stack s(st.size()+1);
  for(int i=0;i<st.size();i++){
    s.push(st[i]) ;
  }

   int top = s.getSize();
   while(!s.isempty()){
    cout<<s.getTop()<<" ";
    s.pop();
   

   }
//    cout<<endl;
//    cout<<"size of stack is "<<s.getSize();
   
}