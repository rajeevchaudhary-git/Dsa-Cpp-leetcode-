#include<iostream>
#include<vector>
using namespace std;

class Circularqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Circularqueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear  = -1;
    }

    void push(int data){
        // queue full
        if(front==0 && rear==size-1 ||rear==front-1){
            cout<<"Queue is full";
            return;
        }
        //single element case
        else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }
        //circular nature
        else if(rear==size-1 && front!=0){
             rear=0;
             arr[rear]=data;

        }
        //normal flow
        else{
            rear++;
            arr[rear]=data;
        }
    }

    void pop(){
        //empty check
        if(front==-1){
            cout<<"queue is empty"<<endl; 
        }
        else if(front==rear){
            arr[front] = -1;
            front =-1;
            rear = -1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
     int getFfront(){
        if(front==-1){
            return -1;
        }
        return arr[front];
    }

    bool isempty(){
        if(front==-1){
            return true;
        }
        return false;
    }

   
};

int main(){
    Circularqueue cq(4);
    cq.push(10);
    cq.push(11);
    cq.push(12);
    cq.push(13);
    // cq.push(100);

   cq.pop();
   cq.push(100);
   
    // cout<<cq.front;
    // cout<<cq.rear;

    while(!cq.isempty()){
        cout<<cq.getFfront()<<" ";
        cq.pop();
    }
}