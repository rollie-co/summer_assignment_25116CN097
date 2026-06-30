#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str1, str2;
    cout << "String 1: "; 
    cin >> str1;
    cout << "String 2: "; 
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "not anagram (length not match)!" << endl;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2){
        cout << "yes it's anagram " << endl;
    }
    else{
        cout << "not anagram " << endl;
    }
}