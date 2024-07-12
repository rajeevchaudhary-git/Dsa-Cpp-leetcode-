#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{-1,-100,3,99};
    int k = 2;
    int n = arr.size();
    k = k % n;  // In case k is greater than the size of the array

    // Temporary vector to store the original values
    vector<int> temp(arr);

    // Clear the original array
    arr.clear();

    // Rotate and populate the original array
    for (int i = n - k; i < n; i++) {
        arr.push_back(temp[i]);
    }
    for (int i = 0; i < n - k; i++) {
        arr.push_back(temp[i]);
    }

    // Print the rotated array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
