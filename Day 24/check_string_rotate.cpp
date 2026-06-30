#include <iostream>
using namespace std;
int main() {
    string str1, str2;
    cout << "String 1: "; 
    cin >> str1;
    cout << "String 2: "; 
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Rotation not possible (length not match !)" << endl;
    }

    string combined = str1 + str1;

    if (combined.find(str2) != string::npos){
        cout << str2 << " is a rotation of " << str1 << endl;
    }
    else{
        cout << str2 << " is NOT a rotation of " << str1 << endl;
    }
}