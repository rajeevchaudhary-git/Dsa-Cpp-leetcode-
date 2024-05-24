#include <iostream>
using namespace std;
int fun(int n)
{
    if (n == 0)
    {
        return -1;
    }
    fun(n - 1);
    cout << n << " ";
}

void printarray(int arr[],int n){
    if(n==0)
    return;
    cout<<*arr<<" ";
    printarray(arr+1,n-1);
}
int main()
{
    int n = 100000;
    fun(n);
    // int arr[10]={10,10,1,2,3,4,5,6,2,2};
    // int n = 10;
    // printarray(arr,n);
}