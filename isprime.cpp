#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;         
    if (num <= 3) return true;         
    if (num % 2 == 0 || num % 3 == 0) return false; 

    for (int i = 5; i <= sqrt(num); i += 6) { 
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
int main(){
vector<int> nums ={8,19,3,4,9};
int bound = 0;  // maja aagaya 
for(int i=0;i<nums.size();i++){
    int el = nums[i];
    for(int j =nums[i]-1; j>=0;j--){
        if(isPrime(j)){
            if(nums[i]-j>bound){
            nums[i] = nums[i]-j;
            bound = nums[i];
            break;
            }
        }
        
        
    }
            bound = nums[i];
}
// int j = 1;
// for(int i=0;i<nums.size()-1;i++){
//   if(nums[i]<nums[j]){
//     j++;
//     cout<<"here";
//   }
//   else{
//     cout<<"not sorted in incressing order";
//   }
// }

for(int i=0;i<nums.size();i++){
 cout<<nums[i]<<" ";
}

}