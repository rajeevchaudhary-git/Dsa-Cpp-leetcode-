#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int s){
        this->size = s;
        arr = new int[size];
        front = 0;
        rear =  0;
    }

    void push(int x){
        if(rear==size){
            cout<<"Queue is full";
            return;
        }
        arr[rear]=x;
        rear++;

    }

    void pop(){
        if(rear==front){
            cout<<"Queue is empty";
            return;
        }
        arr[front] = -1;
        front++;
        if(rear==front){
           front = 0;
           rear = 0;

        }


    }

    int  getFront(){
      if(rear==front){
            cout<<"Queue is empty";
            
        } 
        else{ 
        return arr[front];
        }
    }

   bool isempty(){
     if(rear==front){
            return true;
        } 
        else{
            return false;
        }
   }
   int getsize(){
    return rear-front;
   }
};



int main(){
    Queue q(10);
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    // q.push(19);
    // q.push(20);

   q.pop();
   cout<<"Size of queue is : "<<q.getsize()<<endl;
   cout<<"front of queue is : "<<q.getFront()<<endl;
   while(!q.isempty()){
    cout<<q.getFront()<<" ";
    q.pop();
   }
}