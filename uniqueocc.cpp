#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    // Step 1: Create an array to count occurrences
    int offset = 1000; // Offset to handle negative indices
    int count[2001] = {0}; // Array size to accommodate range -1000 to 1000

    // Step 2: Count the occurrences of each number
    for (int num : arr) {
        count[num + offset]++;
    }

    // Step 3: Check if all occurrence counts are unique
    unordered_set<int> occurrences;
    for (int i = 0; i < 2001; ++i) {
        if (count[i] > 0) {
            if (occurrences.find(count[i]) != occurrences.end()) {
                return false;
            }
            occurrences.insert(count[i]);
        }
    }

    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    cout << (uniqueOccurrences(arr1) ? "True" : "False") << endl; // Output: True

    vector<int> arr2 = {1, 2};
    cout << (uniqueOccurrences(arr2) ? "True" : "False") << endl; // Output: False

    vector<int> arr3 = {3, -3, -3, 3, -3};
    cout << (uniqueOccurrences(arr3) ? "True" : "False") << endl; // Output: False

    return 0;
}
