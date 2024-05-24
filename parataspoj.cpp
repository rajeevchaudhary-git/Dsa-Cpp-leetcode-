#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isspossiblesol(vector<int> ranks, int np, int mid) {
    int currentParata = 0;  // parata counting 
    for(int i = 0; i < ranks.size(); i++) {
        int timetaken = 0;
        int r = ranks[i];
        int j = 1;
        while(true) {
            if(timetaken + j * r <= mid) {
                currentParata++;
                j++;
            } else {
                break;
            }
            if(currentParata >= np) {
                return true;
            }
        }
    }
    return false;
}

long long mintimecompleteOrder(vector<int> ranks, int np) {
    int start = 0;
    int highestRank = *max_element(ranks.begin(), ranks.end());
    long long end = static_cast<long long>(highestRank) * (np * (np + 1) / 2);
    int ans = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(isspossiblesol(ranks, np, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans; 
}

int main() {
    vector<int> cookranks{4, 1, 2, 3, 4};
    int np = 10;
    cout << mintimecompleteOrder(cookranks, np);
    return 0;
}
