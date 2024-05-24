#include<iostream>
#include<vector>
using namespace std;
int bs_search(vector<int> arr,int s,int e,int x){
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
int unboudedserach(vector<int> arr ,  int x){
    int  i = 0;
    int  j = 1;
    while(arr[j]<x){
      i=j;
      j=j*2;
    }
    int s = i;
    int e = j;
    return bs_search(arr,s,e,x);

}
int main(){
vector<int> arr{1,2,4,10,12,19,40,100,101,200,300,500,600};  // array need to be infinte for this algo.
cout<<unboudedserach(arr,500);
}