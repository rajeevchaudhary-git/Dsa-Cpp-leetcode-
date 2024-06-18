#include <iostream>
#include <vector>
using namespace std;
bool issSafe(int x, int y, int row, int col, int arr[][3], vector<vector<bool>> &visted)
{
    if ((x >= 0 && x < row) && (y >= 0 && y < col) && (arr[x][y] == 1) && (visted[x][y] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void sloveMaze(int arr[3][3], int row, int col, int i, int j, vector<vector<bool>> &visted, vector<string> &path, string output)
{
    if (i == row - 1 && j == col - 1)
    {
        // answer found
        path.push_back(output);
        return;
    }
    // down  -> i+1 ,j
    if (issSafe(i + 1, j, row, col, arr, visted))
    {
        visted[i + 1][j] = true;
        sloveMaze(arr, row, col, i + 1, j, visted, path, output + 'D');
        // backttrack
        visted[i + 1][j] = false;
    }

    // left  -> i,j-1
    if (issSafe(i, j - 1, row, col, arr, visted))
    {
        visted[i][j - 1] = true;
        sloveMaze(arr, row, col, i, j - 1, visted, path, output + 'L');
        // backttrack
        visted[i][j - 1] = false;
    }

    // right  -> i,j+1
    if (issSafe(i, j + 1, row, col, arr, visted))
    {
        visted[i][j + 1] = true;
        sloveMaze(arr, row, col, i, j + 1, visted, path, output + 'R');
        // backttrack
        visted[i][j + 1] = false;
    }

    // up   ->i-1,j
    if (issSafe(i - 1, j, row, col, arr, visted))
    {
        visted[i - 1][j] = true;
        sloveMaze(arr, row, col, i - 1, j, visted, path, output + 'U');
        // backttrack
        visted[i - 1][j] = false;
    }
}
int main()
{
    int maze[3][3] = {{0, 0, 0},
                      {1, 1, 0},
                      {1, 1, 1}};
    if (maze[0][0] == 0)
    {
        cout<<"no path exist";
        return -1;
    }

    int row = 3;
    int col = 3;
    vector<vector<bool>> visted(row, vector<bool>(col, false));
    // src ki value
    // visted[0][0] = true;
    vector<string> path;
    string output = "";

    sloveMaze(maze, row, col, 0, 0, visted, path, output);

    for (auto i : path)
    {
        cout << i << " ";
    }

    if(path.size()==0){
        cout<<"No path exists";
    }
}