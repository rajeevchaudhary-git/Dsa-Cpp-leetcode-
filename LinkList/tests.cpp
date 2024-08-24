#include<iostream>
#include<vector>
#include<algorithm>
#include <limits.h>


using namespace std;
int maxFrequencyElements(vector<int>& nums) {
    int n= nums.size();
    int max=INT_MIN;
    int out=0;
        vector<int>c(n+1, 0);
        for(int i=0; i<n; i++){
            c[nums[i]]++;
        }
         for(int i=1; i<c.size(); i++){
                     cout<<c[i]<<" ";     
         }
          for(int i=0; i<c.size(); i++){
         if(c[i]>max){
            max= c[i];
         }
         if(c[i]==max){
           out+=c[i];
         }
      }
        return out;
    }


int main(){
    vector<int> arr{1,2,3,4,5};
   cout<< maxFrequencyElements(arr);
    return 0;
}