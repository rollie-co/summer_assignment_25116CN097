#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string sentence;
    cout << "Sentence enter karo: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word, longestWord = "";

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest Word: " << longestWord << " (Length: " << longestWord.length() << ")" << endl;

}