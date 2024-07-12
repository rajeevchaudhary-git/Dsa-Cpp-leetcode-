#include <iostream>
#include <vector>
using namespace std;

int removeAb(string& s, int x) {
    int ans = 0;
    string st1 = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'b') {
            st1.push_back(s[i]);
        } else {
            if (!st1.empty() && st1.back() == 'a') {
                st1.pop_back();
                ans += x;
            } else {
                st1.push_back(s[i]);
            }
        }
    }
    s = st1;
    return ans;
}

int removeBA(string& s, int y) {
    int ans = 0;
    string st = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'a') {
            st.push_back(s[i]);
        } else {
            if (!st.empty() && st.back() == 'b') {
                st.pop_back();
                ans += y;
            } else {
                st.push_back(s[i]);
            }
        }
    }
    s = st;
    return ans;
}

int main() {
    string s = "aabbaaxybbaabb";
    int ans = 0;
    int x = 4;
    int y = 5;

    if (x > y) {
        ans += removeAb(s, x);
        ans += removeBA(s, y);
    } else {
        ans += removeBA(s, y);
        ans += removeAb(s, x);
    }

    cout << ans;
    return 0;
}
