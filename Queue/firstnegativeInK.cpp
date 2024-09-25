#include<iostream>
#include<vector>
#include<deque>
using namespace std;
void slove(int arr[],int n,int k){
    deque<int> q;
    // first k window
    for(int i=0;i<k;i++){
        if(arr[i]<0){
          q.push_back(i);
        }
    }
  for(int i=k;i<n;i++){
    //answer for old window
    if(q.empty()){
         cout<<0<<" ";
    }
    else{
        cout<<arr[q.front()]<<" ";
    }

    //out of window ko remove kardo 
    while(!q.empty() && i-q.front()>=k){
        q.pop_front();
    }

    // check cuurrent element 
    if(arr[i]<0){
        q.push_back(i);
    }
  }
  //answer for last window
    if(q.empty()){
         cout<<0<<" ";
    }
    else{
        cout<<arr[q.front()]<<" ";
    }

}
int main(){
    int arr[]  ={-8,2,3,-6,10};
    int  n = 5;
    int k = 3;

   slove(arr,n,k);

}