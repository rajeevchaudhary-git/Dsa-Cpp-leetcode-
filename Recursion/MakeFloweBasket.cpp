#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

 bool isPossible(vector<int> &arr,int days,int Flowerbuket,int k){
        int count=0;
        int basket=0;
        for(int i=0;i<=arr.size()-1;i++){
            if(arr[i]<=days){
                count++;
            }
            else{
                basket+=count/k;
                count=0;
            }
        }
       basket+=count/k;
       if(basket>=Flowerbuket){
        return true;
       }
      
        return false;
       
    }

int main(){
    vector<int> bloomDay {1,10,3,10,2};
    int s = *min_element(bloomDay.begin(),bloomDay.end());
    int e = *max_element(bloomDay.begin(),bloomDay.end());
    int m = 3;
    int k = 1;
    int result =-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(bloomDay,mid,m,k)){
            result = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout<< result;
    
   
}