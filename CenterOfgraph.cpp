#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2},
        {2, 3},
        {4, 2}
    };

    // Iterate over the 2D vector using nested for loops
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            // Check if the current element matches any other element
            for (int k = 0; k < matrix.size(); k++) {
                for (int l = 0; l < matrix[k].size(); l++) {
                    if (matrix[i][j] == matrix[k][l] && !(i == k && j == l)) {
                        cout << "Duplicate found: " << matrix[i][j] << endl;
                    }
                }
            }
        }
    }

    return 0;
}
