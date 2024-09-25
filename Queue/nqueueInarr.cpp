#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int n,k,freespot;
    int *arr,*front,*rear ,*next;

     
     Queue(int _n,int _k):n(_n),k(_k),freespot(0){
        arr = new int[n];
        next = new int[n];
        front = new int[k];
        rear= new int[k];

        for(int i=0;i<k;i++){
            front[i]=rear[i]=-1;
        }

        for(int i=0;i<n;i++){
            next[i]=i+1;
        }

     }

    bool push(int x,int qi){
           if(freespot==-1){
            return false;
           }
           // find free index
           int index = freespot;

           //update freespot 
            freespot = next[index];

            //if first element in qi 
            if(front[qi]==-1){
                front[qi]=index;
            }
            else{
                // link new element to that queues rearest element
                next[rear[qi]]=index;
            }
            //update next
            next[index]=-1;

            //update rear 
            rear[qi]=index;
            arr[index]= x;
            return true;

    }
 // pop element from qi queue 
    int pop(int qi){
     if(front[qi]==-1){
        return -1;
     }

     // find index to pop
     int index = front[qi];

     //update front 
     front[qi]= next[index];

     //update freespots
     next[index] =  freespot;
     freespot = index;

     return arr[index];

    }

};

int main(){
   
}