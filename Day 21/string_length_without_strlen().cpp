#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "enter string: "; 
    cin >> str;

    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "String Length: " << length << endl;
    
}