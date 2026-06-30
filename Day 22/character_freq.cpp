#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string str;
    cout << "enter string : "; 
    cin >> str;

    unordered_map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }

    cout << "Character Frequency:\n";
    for (auto &pair : freq) {
        cout << "'" << pair.first << "' : " << pair.second << endl;
    }
}