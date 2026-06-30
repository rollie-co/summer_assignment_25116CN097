#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "enter string : "; 
    cin >> str;

    string reversed = str;
    int start = 0, end = reversed.length() - 1;

    while (start < end) {
        swap(reversed[start], reversed[end]);
        start++;
        end--;
    }

    if (str == reversed){
        cout << str << " yes it's Palindrome !" << endl;
    }
    else{
        cout << str << " not a Palindrome !" << endl;
    }
}