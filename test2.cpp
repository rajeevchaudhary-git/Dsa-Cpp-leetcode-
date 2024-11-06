#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr{40, 10,10,20, 20, 30};
    vector<int> sortedArr = arr; // Copy original array
    map<int, int> rankMap;  // To store the rank of each element

    // Sort the copied array
    sort(sortedArr.begin(), sortedArr.end());

    // Assign ranks to the elements in the sorted array
    int rank = 1;
    for (int num : sortedArr) {
        if (rankMap.find(num) == rankMap.end()) {  // Only assign rank if it's not already assigned
            rankMap[num] = rank;
            rank++;
        }
    }

    // Replace elements in the original array with their ranks
    for (int num : arr) {
        cout << rankMap[num] << " ";  // Print the rank of each element in the original array
    }
    cout << endl;

    return 0;
}
