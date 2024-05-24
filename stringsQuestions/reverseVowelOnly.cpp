#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// for identify vowels 
bool issvowel(char s)
{
    s = tolower(s);
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
}

string reverseVowels(string s)
{
    int high = s.size() - 1;
    int low = 0;
    while (low < high)
    {
        if (issvowel(s[low]) && issvowel(s[high]))
        {
            swap(s[low], s[high]);
            low++;
            high--;
        }
        else if (!issvowel(s[low]))
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return s;
}
int main()
{
    string s ="leetcode";
    cout<<reverseVowels(s);
}