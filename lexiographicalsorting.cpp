#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
  int n = 13;
  vector<string> ch;
  vector<int> ans;
  
  for(int i = 1; i <= n; i++){
    string el = to_string(i);  // Correctly declare el as a string
    ch.push_back(el);
  }

  sort(ch.begin(), ch.end());

  for(auto c : ch){
   ans.push_back(stoi(c));
  }

for (int i = 0; i <ans.size(); i++)
{
   cout<<ans[i]<<" ";
}

  return 0;
}
