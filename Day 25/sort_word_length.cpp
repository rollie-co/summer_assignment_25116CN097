#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

bool compareLength(string a, string b) {
    return a.length() < b.length();
}

int main() {
    string sentence;
    cout << "enter sentence : ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    vector<string> words;
    while (ss >> word){
        words.push_back(word);
    }

    sort(words.begin(), words.end(), compareLength);

    cout << "Words sorted by length:\n";
    for (string w : words){
        cout << w << " (" << w.length() << ")" << endl;
    }
}