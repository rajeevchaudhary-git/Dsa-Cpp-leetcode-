#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr{1,2,3};
vector<int> arr2{2,4,6};
vector<int> num1(arr.size()+arr2.size());
vector<int> num12(arr.size()+arr2.size());
int i=0;
int j=0;
while(i<=arr.size()-1){
    if(j>=arr2.size()){
        j=0;
    }
if(arr[i]==arr2[j]){
cout<<arr[i]<<' ';
i++;
}
else{
j++;
}
}

// for(int i=0;i<num1.size();i++){
//     cout<<num1[i]<<" ";
// }
}