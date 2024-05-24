#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long int possiblesol(vector<long long> trees,long long m,long long mid){
long long woodCollected = 0;
for(long long i = 0; i<trees.size();i++ ){
    if(trees[i]>mid){                 /// if height of tree is greater than mid then enter in this if 
    woodCollected+=trees[i]-mid;
    }
}
// if(woodCollected>=m){
// cout<<woodCollected<<" ";
// }
return woodCollected >=m;
}

long long int sawblade(vector<long long int> trees,long long int m){
    long long start = 0;
    long long end = *max_element(trees.begin(),trees.end());
    long long ans = 0;
    while(start<end){
        long long mid = start+(end-start)/2;
        if(possiblesol(trees,m,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
vector<long long> arr{20,15,10,17};
long long int m = 7;
cout<<sawblade(arr,m);

}