#include<iostream>
#include<algorithm>
using namespace std;

void sort012(int* a, int n) {
    int s = 0, e = n - 1, i = 0;
    while (i <= e) {
        if (a[i] == 0) {
            swap(a[s], a[i]);
            
            s++;
            i++;
        } else if (a[i] == 1) {
            i++;
        } else {
            swap(a[e], a[i]);
            e--;
        }
    }
}

int main() {
   int arr[] = {0, 2, 1, 2, 0}; 
   int n = 5;
   sort012(arr, n);
   for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
   }
   return 0;
}
