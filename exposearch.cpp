#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int bs(vector<int> arr, int s,int e,int x){
while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
    }
        e = mid-1;
    else{
        s = mid+1;
    }
}
return -1;
}
int exposearch(vector<int> arr ,int x){
    int i=1;
    int n = arr.size();
    while(i<arr.size()-1 && arr[i]<=x){
        i = i*2;
    }
    return bs(arr,i/2,min(i,n),x);
}
int main(){
vector<int> arr{3,4,5,6,11,13,14,15,56,70};
cout<<exposearch(arr,70);

}