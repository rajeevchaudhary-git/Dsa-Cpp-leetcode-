#include<iostream>
#include<vector>
using namespace std;
int robHouse(vector<int> arr,int i){
    if(i>=arr.size()){
        return 0;
    }
    int robamount1 = arr[i] + robHouse(arr,i+2);
    int robamount2 = 0 + robHouse(arr,i+1);
    return max(robamount1,robamount2);
}
int main(){
    vector<int> arr{5,2,3,5};
   int ans =  robHouse(arr,0);
   cout<<ans;

}











