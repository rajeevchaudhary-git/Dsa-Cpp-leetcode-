#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
string sentence = "i love eating burger";
string searchWord = "burg";
vector<string> st;
string ans;
for(int i=0;i<sentence.size();i++){
    if(sentence[i]!=' '){
        ans.push_back(sentence[i]);
        // cout<<"recived ans is "<<ans<<endl;
    }
    if(sentence[i]==' ' || i==sentence.size()-1){
        //  cout<<"recived ans is "<<ans<<endl;
        if(!ans.empty()){
        st.push_back(ans);
        ans.clear();
        }
    }
}

// int sindex = st.find(searchWord);

 for (int i = 0; i < st.size(); i++) {
            if (st[i].substr(0, searchWord.size()) ==
                searchWord) { // yeah  asure karega ki zero se start ho
                              // search word
                cout<< i + 1;
            }
        }
}

