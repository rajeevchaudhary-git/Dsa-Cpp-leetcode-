#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int mincoin(vector<int>&coins,int x){
   if(x==0){
       return 0;
   }
   if(x<0){
       return -1;
   }
   int res = INT_MAX;
   for(int i=0;i<coins.size();i++){
    int sub_res = mincoin(coins,x-coins[i]);
    if(sub_res!=-1){
        res = min(res,sub_res+1);  //+1 is for the coin we are using
    }

    }
    return (res==INT_MAX)?-1:res;
}

int main(){
vector<int> coins = {2};
int x = 3;
cout<<mincoin(coins,x);

}