#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr{2,4,1,1,4,5,2};
    int index = *max_element(arr.begin(),arr.end());
    vector<int> count(index+1,0);
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }
    for (int i = 0; i <count.size(); i++)
    {
        cout<<count[i]<<" ";
    }
    
}
