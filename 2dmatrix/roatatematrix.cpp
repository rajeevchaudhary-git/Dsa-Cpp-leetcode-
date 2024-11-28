#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> mt={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = mt.size();
    int col = mt[0].size();
 cout<<"before Transpose "<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
          swap(mt[i][j],mt[j][i]);
        }
    }

 for (int i = 0; i < row; ++i) {
            int left = 0, right = col - 1;
            while (left < right) {
                swap(mt[i][left], mt[i][right]);
                left++;
                right--;
            }
        }

 cout<<"after Transpose "<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }

    

    
}