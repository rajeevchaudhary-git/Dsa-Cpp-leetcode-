#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void sellStock(vector<int> &arr,int i ,int &min_price , int &maxProfit){
 // base 
 if(i==arr.size())return;   
 if(arr[i]<min_price){
    min_price = arr[i];
 }

//  int todayProfit = arr[i]-min_price;
 if(arr[i]-min_price > maxProfit){
    maxProfit = arr[i]-min_price;
 }
sellStock(arr,i+1,min_price,maxProfit);

}

int main(){
vector<int> stocks{7,2,4,5,6,32,10};
int min_price = INT_MAX;
int maxProfit = INT_MIN;
int  i =0;
sellStock(stocks,i,min_price,maxProfit);
cout<<maxProfit;
}