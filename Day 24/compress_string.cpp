#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "enter string : "; 
    cin >> str;

    string compressed = "";
    int n = str.length();

    int i = 0;
    while (i < n) {
        char currentChar = str[i];
        int count = 0;

        while (i < n && str[i] == currentChar) {
            count++;
            i++;
        }

        compressed += currentChar;
        compressed += to_string(count);
    }

    cout << "Compressed String: " << compressed << endl;

}