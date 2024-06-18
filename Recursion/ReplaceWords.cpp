#include<iostream>
#include<string>
#include<vector>
using namespace std;

void removeFollowingChars(string &s, int index, int length) {
    index += length; // Start removing after the found word
    while (index < s.length() && s[index] != ' ') {
        s.erase(s.begin() + index);
    }
}

int main() {
    vector<string> dictionary{"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";

    for (int i = 0; i < dictionary.size(); i++) {
        size_t firstindex = sentence.find(dictionary[i]); // Find the first index of the dictionary word in the sentence
        while (firstindex != string::npos) { // Continue until no more occurrences are found
            removeFollowingChars(sentence, firstindex, dictionary[i].length()); // Remove characters following the found word
            firstindex = sentence.find(dictionary[i], firstindex + 1); // Find the next occurrence
        }
    }

    cout << sentence << endl;
    return 0;
}
