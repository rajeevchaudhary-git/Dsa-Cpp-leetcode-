#include <iostream>
#include <vector>
using namespace std;

class Nstack
{
    int *a;
    int *top;
    int *next;
    int n; // no of stacks
    int size;
    int freespot;

public:
    Nstack(int _n, int _s) : n(_n), size(_s)
    {
       

        freespot = 0;
        a = new int[size];
        top = new int[n];
        next = new int[size];

        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        for (int i = 0; i < size; i++)
        {
            next[i] = i + 1;
        }
        next[size - 1] = -1;
    }

    bool push(int m, int x) {  // m is name of stack 
    // overflow
     if(freespot==-1){
            return false;
        }

    // finding index
      int index = freespot;
      // updating free spot 
      freespot = next[index];

      // insert x at index 
      a[index] = x;

      //update next 
      next[index]= top[m-1];
      
      //update top
      top[m-1]= index;
      
      return true;
    }

    int pop(int m){
      int index = top[m-1];
      
      top[m-1]=next[index];
      int popedElement = a[index];
      next[index]= freespot;
      freespot = index;
      return popedElement;
    }

    ~Nstack(){
        delete[] a;
        delete[] top;
        delete[] next;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<a[i]<<" ";
        }
    }
};

int main()
{
    Nstack  st(10,6);
    st.push(1,10); 
    st.push(2,10); 
    st.push(3,10); 
    st.push(1,10); 
    st.push(1,10); 
    st.push(1,10); 
    st.push(1,10); 
    st.print();
    
  
   
}