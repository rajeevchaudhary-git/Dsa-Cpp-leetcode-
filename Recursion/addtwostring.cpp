#include <iostream>
#include <string>
using namespace std;
void reverseTheString(string &str, int start, int end)
{
    if (start >= end)
    {

        return;
    }
    swap(str[start], str[end]);
    reverseTheString(str, start + 1, end - 1);
}

// recursive approch to find sum of two string as a number 
void AddString(string &num1, string &num2, int p1, int p2, int carry, string &ans)
{
    if (p1 < 0 && p2 < 0)
    {
        if (carry != 0)
        {
            ans.push_back(carry + '0');
        }
        return;
    }
    int digit1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int digit2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    int csum = digit1 + digit2 + carry;
    int lastdigit = csum % 10;
    carry = csum / 10;
    ans.push_back(lastdigit + '0');
    AddString(num1, num2, p1 - 1, p2 - 1, carry, ans);
}

int main()
{
    string s = "99";
    string s2 = "9";
    string ans = "";
    int p = s.size() - 1;
    int p2 = s2.size() - 1;
    int carry = 0;

   // iterative way to add string as number 
    // while (p >= 0 || p2 >= 0 || carry > 0)
    // {
    //     int digit1 = (p < 0 ? 0 : s[p] - '0');
    //     int digit2 = (p2 < 0 ? 0 : s2[p2] - '0');
    //     int csum = digit1 + digit2 + carry;
    //     int digit = csum % 10;
    //     carry = csum / 10;
    //     ans += digit + '0';
    //     p--;
    //     p2--;
    // }
    AddString(s,s2,p,p2,0,ans);
    reverseTheString(ans, 0, ans.size() - 1);
    cout << ans;
}