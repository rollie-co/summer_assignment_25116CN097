#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    string str;
    cout << "String enter karo: "; 
    cin >> str;

    unordered_set<char> seen; 
    string result = "";

    for (char c : str) {
        if (seen.find(c) == seen.end()) {
            result += c;
            seen.insert(c);
        }
    }

    cout << "String without duplicates: " << result << endl;
}