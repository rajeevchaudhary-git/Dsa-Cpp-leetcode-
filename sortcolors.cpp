#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int start = 0;
    int mid = 0;
    int end = arr.size() - 1;

    while(mid <= end){
        if(arr[mid] == 0){
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{ // arr[mid] == 2
            swap(arr[mid], arr[end]);
            end--;
        }
    } 

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}
