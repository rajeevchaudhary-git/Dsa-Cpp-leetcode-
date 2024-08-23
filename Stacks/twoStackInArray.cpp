#include<iostream>
#include<vector>
using namespace std;

class Stack{
    private:
    int top;
    int size;
    int top2;
    int * arr;

   public:
    Stack(int size){
       arr = new int[size];
       this->size =size;
       top = -1;
       top2 = size;
    }

    void push1(int data){
        if(top2-top>1){
            top = top+1;
            arr[top] = data;
        }
        else{
              cout<<"space is not available in stack 1 "<<endl;
        }
    }

    void push2(int data){
        if(top2-top>1){
            top2 = top2-1;
            arr[top2] = data;
        }
        else{
            cout<<"space is not available in stack 2 "<<endl;
        }
    }

    void pop1(){
        if(top==-1){
            cout<<"stack is underflow"<<endl;
        }
        else{
            top = top-1;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"stack is underflow"<<endl;
        }
        else{
            top2 = top2+1;
        }
    }


    bool is_empty1(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    bool is_empty2(){
        if(top2==size){
            return true;
        }
        else{
            return false;
        }
    }

    int getTop1(){
        if(top!=-1){
        return arr[top];
        }
        else{
        return 0;
        }
    }

    int getTop2(){
        if(top2!=size){
        return arr[top2];
        }
        else{
        return 0;
        }
    }


};

int main(){
 Stack s(10);

 s.push1(10);
 s.push1(20);
 s.push1(30);


s.pop1();

 // second stack
 s.push2(70);
 s.push2(80);
 s.push2(90);
 s.push2(100);
 s.push2(100);
 s.push2(100);
 s.push2(1000);
 s.push2(1000);
;
 
 cout<<"stack one list : ";
 while(!s.is_empty1()){
  cout<<s.getTop1()<<" ";
  s.pop1();
 }
 cout<<endl<<"stack two list : ";

 while(!s.is_empty2()){
    cout<<s.getTop2()<<" ";
    s.pop2();
 }

}