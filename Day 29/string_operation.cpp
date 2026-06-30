#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "=== Menu Driven String Operations ===" << endl;
    cout << "enter string : ";
    cin >> str;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1.  Length" << endl;
        cout << "2.  Uppercase" << endl;
        cout << "3.  Lowercase" << endl;
        cout << "4.  Reverse" << endl;
        cout << "5.  Palindrome Check" << endl;
        cout << "6.  Vowel Count" << endl;
        cout << "7.  Consonant Count" << endl;
        cout << "8.  Character Search" << endl;
        cout << "9.  Substring Check" << endl;
        cout << "10. String Replace" << endl;
        cout << "11. new string add? " << endl;
        cout << "12. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                cout << "Length: " << str.length() << endl;
                break;

            case 2: {
                string upper = str;
                transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
                cout << "Uppercase: " << upper << endl;
                break;
            }

            case 3: {
                string lower = str;
                transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
                cout << "Lowercase: " << lower << endl;
                break;
            }

            case 4: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                cout << "Reverse: " << rev << endl;
                break;
            }

            case 5: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                if (str == rev) cout << str << " palindrome hai " << endl;
                else cout << str << " not a palindrome " << endl;
                break;
            }

            case 6: {
                int vowels = 0;
                for (char c : str)
                    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                    vowels++;}
                cout << "Vowels: " << vowels << endl;
                break;
            }

            case 7: {
                int consonants = 0;
                for (char c : str)
                    if (isalpha(c) && !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'|| c=='A'||c=='E'||c=='I'||c=='O'||c=='U')){
                    consonants++;}
                cout << "Consonants: " << consonants << endl;
                break;
            }

            case 8: {
                char ch;
                cout << "Character search: "; cin >> ch;
                int pos = str.find(ch);
                if (pos != string::npos) cout << ch << " character found at index " << pos << endl;
                else cout << "character not found " << endl;
                break;
            }

            case 9: {
                string sub;
                cout << "Substring: "; cin >> sub;
                if (str.find(sub) != string::npos) cout << "Substring found !" << endl;
                else cout << "Substring not found " << endl;
                break;
            }

            case 10: {
                char oldCh, newCh;
                cout << "which char to be replaced ? : ";
                cin >> oldCh;
                cout << "to whom replace : ";
                cin >> newCh;
                for (char &c : str){if (c == oldCh) {c = newCh;}
             } cout << "new string: " << str << endl;
                break;
            }

            case 11:
                cout << "new string: "; cin >> str;
                break;

            case 12:
                cout << "String System closed ." << endl;
                break;

            default:
                cout << "wrong choice!" << endl;
        }
    } while (choice != 12);
}