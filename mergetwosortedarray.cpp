#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      vector<int> store;
      int pointerm=0;
      int pointern =0;
    //   while(pointerm<m || pointern<n){
        
    //     if (nums1[pointerm] <= nums2[pointern]) {
    //         if(nums1[pointerm]!=0){
    //         store.push_back(nums1[pointerm]);
    //         }
    //         pointerm++;
    //     } else {
    //         if(nums2[pointern]!=0){
    //         store.push_back(nums2[pointern]);
    //         }
    //         pointern++;
    //     }
         
    //   }  


    ///  leetcode accepted method 

      for(int i=0;i<nums2.size();i++){
        nums1[m+i]+=nums2[i];
      }
      sort(nums1.begin(),nums1.end());
     for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
      }




/// method two pointer   /// need to be corrected
    // int pointm = 0;
    // int pointn =0;
    // while(pointm<m && pointn<n){
    //     if(nums1[pointerm]<nums2[pointn]){
    //         pointerm++;
    //     }
    //     else if(nums1[pointerm]>=nums2[pointn]){
    //         nums1[pointerm] = nums1[pointerm+1];
    //         nums1[pointerm] = nums2[pointern];
    //         pointn++;
    //     }
    // }
    //  for(int i=0;i<nums1.size();i++){
    //     cout<<nums1[i]<<" ";
    //   }
    }
int main(){
vector<int> arr{1,2,3,0,0,0};
vector<int> arr2{2,5,6};
int m=3;
int n=3;
merge(arr,m,arr2,n);
}