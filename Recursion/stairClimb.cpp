#include<iostream>
using namespace std;
int stairClimb(int stair){
    if(stair==0 || stair==1)
    return 1;
    int ans = stairClimb(stair-1) + stairClimb(stair-2);
    return ans;
}
int main(){
    int stair = 3;
    cout<<stairClimb(stair);
}