#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int search(vector<int> arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
}

int main(){
    vector<string> names{"Mary","John","Emma"};
    vector<int> heights{180,165,170};

    vector<int> tempArr(heights);
    sort(tempArr.begin(), tempArr.end(), greater<int>());  
    // 180,170,165
    vector<string> ans;

    
   for(int i=0;i<heights.size();i++){
   int index =  search(heights,tempArr[i]);
    ans.push_back(names[index]);
   }

   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }

   // marry emma john 
  
}