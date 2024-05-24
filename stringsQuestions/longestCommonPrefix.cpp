#include <iostream>
#include <vector>
#include<string>
using namespace std;
string longestCommonPrefix(vector<string> strs)
{
     
    string ans;
    int i = 0;
    while (true)
    {
        char currch = 0;
        for (auto str : strs)
        {
            if (i >= str.size())
            {
                // out of bound
                currch = 0;
                break;
            }
            if (currch == 0)
            {
                currch = str[i];
            }
            else if (str[i] != currch)
            {
                currch = 0;
                break;
            }
        }
        if (currch == 0)
        {
            break;
        }
        //  cout<<"d";
        
        ans.push_back(currch);
        i++;
      
    }
    return ans;
}
int main()
{
    vector<string> arr{"flower", "flow", "flight","cat"};
    cout << longestCommonPrefix(arr);
    if(longestCommonPrefix(arr)==""){
     cout<<"no common prefix found!!";
    }
}