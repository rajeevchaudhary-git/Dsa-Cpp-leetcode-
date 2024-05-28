#include<iostream>
#include<vector>
using namespace std;
int minCostTicket(vector<int> days,vector<int> costs,int i){
    if(i>=days.size()) return 0;
    //  sol for case 1
    // 1 day pass taken 
    int cost1 = costs[0] + minCostTicket(days,costs,i+1);

    // 7 days pass 
    int passEndDay= days[i]+7-1;
    int j=i;
    while(j<days.size() && days[i] <=passEndDay){
        j++;
    }
    int cost7 = costs[1]+minCostTicket(days,costs,j);

    // 30 days pass 
    passEndDay = days[i]+30-1;
    j=i;
    while(j<days.size() && days[i] <=passEndDay){
        j++;
    }
    int cost30 = costs[2]+minCostTicket(days,costs,j);
    return min(cost1,min(cost7,cost30));



}
int main(){
vector<int> days{2,9,10,22};
vector<int> costs{2,7,25};
cout<<minCostTicket(days,costs,0);

}
