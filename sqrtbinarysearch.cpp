#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int n){
int s  = 0;
int ans = -1;
int e = n;
int mid = s+(e-s)/2;
while (s<=e)
{
   mid = s+(e-s)/2;

   if(mid*mid==n){
    return mid;
   } 
   if(mid*mid<n){
    ans=mid;
    s = mid+1;
   }
   else{
   e=mid-1;
   }
}
return ans;

}
int main(){
    int n = 10;
    int ans = binarysearch(n);
    int precision;
    cout<<"Enter a preciosn: "<<endl;
    cin>>precision;
     char a[108]={1,2 };
    double step = 0.1;
    double finalans = ans;

    for(int i=0; i<precision;i++){
        for(double j=ans;j*j<n;j+=step){
            finalans=j;
        }
        step = step/10;
    }
    cout<<finalans;
}