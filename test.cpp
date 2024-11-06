#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Stack to store the leaders
    vector<int> leaders;

    // The rightmost element is always a leader
    int currentLeader = arr[n - 1];
    leaders.push_back(currentLeader);

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > currentLeader) {
            currentLeader = arr[i];
            leaders.push_back(currentLeader);  // Push the leader to the stack
        }
    }                                         

    // Print the leaders
    for(int i=0;i<leaders.size();i++){
        cout<<leaders[i]<<" ";
    }
    return 0;
}
