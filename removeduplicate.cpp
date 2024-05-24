#include<iostream>
#include<set>
#include<vector>
using namespace std;

int removeDuplicate(vector<int> arr) {
    set<int> store;
    for(int i = 0; i < arr.size(); i++) {
        store.insert(arr[i]);  
    }
    for (auto& nums : store) {
        cout << nums << ' ';
    }
    std::cout << std::endl; // Add a newline for clarity
    return store.size();
}

int main() {
    vector<int> arr{1, 1, 2};
    cout << "Unique elements: ";
    cout << removeDuplicate(arr);
    return 0;
}
