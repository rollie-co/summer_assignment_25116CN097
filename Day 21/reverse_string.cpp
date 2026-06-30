#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "enter string : "; 
    cin >> str;

    int start = 0, end = str.length() - 1;

    while (start < end) {                                               // Two pointer technique - swap karte jao
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << "Reversed String: " << str << endl;

}