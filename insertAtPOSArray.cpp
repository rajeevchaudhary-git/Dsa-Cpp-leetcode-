#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int i=0, elem=100, pos=12, tot=arr.size();
    for(i=tot; i>=pos; i--){
        arr[i] = arr[i-1];
    }
        arr[i] = elem;
         tot++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    cout<<arr[12];
    return 0;
}