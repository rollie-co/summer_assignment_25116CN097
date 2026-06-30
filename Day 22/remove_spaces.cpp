#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "String (with spaces): ";
    getline(cin, str);

    string result = " ";

    for (char c : str) {
        if (c != ' ') {
            result += c;
        }
    }

    cout << "String without spaces: " << result << endl;
}