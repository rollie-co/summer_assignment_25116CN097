#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX = 5;
    string bookNames[MAX];
    bool isIssued[MAX] = {false}; 
    int count = 0;
    int choice;

    cout << "=== Mini Library System ===" << endl;
    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Book Add " << endl;
        cout << "2. Show Books" << endl;
        cout << "3. Book Issue" << endl;
        cout << "4. Book Return " << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: "; 
        cin >> choice;

        switch (choice) {
            case 1:
                if (count >= MAX) { cout << "Library full hai!" << endl; break; }
                cout << "Book ka Naam: "; 
                cin >> bookNames[count];
                isIssued[count] = false;
                count++;
                cout << "Book add ho gayi!" << endl;
                break;

            case 2:
                if (count == 0) { cout << "Koi book nahi!" << endl; break; }
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << bookNames[i]
                         << " - " << (isIssued[i] ? "Issued" : "Available") << endl;
                }
                break;

            case 3: {
                string name;
                cout << "which book to be issued ?  "; 
                cin >> name;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (bookNames[i] == name) {
                        if (isIssued[i]) cout << "Book already issued !" << endl;
                        else { isIssued[i] = true; cout << "Book issued " << endl; }
                        found = true; break;
                    }
                }
                if (!found) cout << "Book not found " << endl;
                break;
            }

            case 4: {
                string name;
                cout << "which book to be returned : "; cin >> name;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (bookNames[i] == name) {
                        if (!isIssued[i]) cout << "Book already available !" << endl;
                        else { isIssued[i] = false; cout << "Book returned !" << endl; }
                        found = true; break;
                    }
                }
                if (!found) cout << "Book not found !" << endl;
                break;
            }

            case 5:
                cout << "Library closed ." << endl;
                break;

            default:
                cout << "wrong choice!" << endl;
        }
    } while (choice != 5);
}