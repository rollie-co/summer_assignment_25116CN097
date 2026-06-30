#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    string str1, str2;
    cout << "String 1: "; 
    cin >> str1;
    cout << "String 2: "; 
    cin >> str2;

    unordered_set<char> set1(str1.begin(), str1.end());
    unordered_set<char> result;

    for (char c : str2) {
        if (set1.find(c) != set1.end()) {
            result.insert(c);
        }
    }

    cout << "Common Characters: ";
    if (result.empty()){
        cout << "no common character !" << endl;
    }
    else {
        for (char c : result) cout << c << " ";
        cout << endl;
    }
    
}