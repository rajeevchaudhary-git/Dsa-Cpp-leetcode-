#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
        
        // Count each character in the magazine
        for (char c : magazine) {
            charCount[c]++;
        }
          for(int i=0;i<ransomNote.size();i++){
          if(charCount[ransomNote[i]]>0){
            charCount[ransomNote[i]]--;
          }

          else{
            return false;
          }
          }
          return true;

        }

      
        
    

int main() {

    string ransomNote = "aa";
    string magazine = "aab";
//    cout<< canConstruct(ransomNote,magazine);
    
           unordered_map<char, int> charCount;


     for (const auto& pair : charCount) {
        cout << "Character: " << pair.first << ", Count: " << pair.second << endl;
    }
    
    return 0;
}
