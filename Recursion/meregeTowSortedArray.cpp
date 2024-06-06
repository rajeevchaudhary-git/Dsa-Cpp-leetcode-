#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr{1,2,4,5,6,7};
vector<int>arr2{0,1,3,10,11,12,13,13};
int s = 0;
int s2 = 0;
vector<int>merged;
while(s<arr.size() || s2<arr2.size()){

if(s>=arr.size()){
    merged.push_back(arr2[s2]);
    s2++;
}

else if(s2>=arr2.size()){
    merged.push_back(arr[s]);
    s++;
}
else if(arr[s]<arr2[s2]){
    merged.push_back(arr[s]);
    s++;
}
else{
   merged.push_back(arr2[s2]); 
   s2++;
}
}
// cout<<merged.size();
for (int i = 0; i < merged.size(); i++)
{
    cout<<merged[i]<<" ";
}

}