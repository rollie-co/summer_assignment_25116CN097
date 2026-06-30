#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string str;
    cout << "enter string : "; 
    cin >> str;

    unordered_map<char, int> freq;
    for (char c : str){
        freq[c]++;
    }

    bool found = false;
    for (char c : str) {
        if (freq[c] > 1) {
            cout << "First Repeating Character: " << c << endl;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "not found repeating character !" << endl;
    }
}