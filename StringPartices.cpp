#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <limits.h>

using namespace std;

int main(){
vector<string> arr{"23:59","00:00"};
vector<int> TimeInminutes;
for(int i =0;i<arr.size();i++){
    string time = arr[i];
    int hour = stoi(time.substr(0,2));
    int minutes = stoi(time.substr(3,4));
     TimeInminutes.push_back((hour*60)+minutes);
    //  cout<<time.substr(3,5);
}
// sorting is here 
sort(TimeInminutes.begin(),TimeInminutes.end());
int mini = INT_MAX;
for(int i=0;i<TimeInminutes.size()-1;i++){
   int diff = TimeInminutes[i+1]-i;
//    cout<<TimeInminutes[i];
//    cout<<diff;
   mini = min(mini,diff);
}
int lastminute = (TimeInminutes[0]+1440) -TimeInminutes[TimeInminutes.size()-1];
mini = min(mini,lastminute);

cout<<mini;
}