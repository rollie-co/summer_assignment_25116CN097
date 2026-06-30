#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string str;
    cout << "enter string : "; 
    cin >> str;

    unordered_map<char, int> freq;
    for (char c : str) freq[c]++;

    char maxChar;
    int maxCount = 0;
    for (auto &pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }

    cout << "Maximum Occurring Character: '" << maxChar<< "' (Count: " << maxCount << ")" << endl;
    
}