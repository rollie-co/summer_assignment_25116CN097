#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

int main() {
    const int MAX = 10;
    Contact contacts[MAX];
    int count = 0;
    int choice;

    cout << "=== Contact Management System ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Contact Add " << endl;
        cout << "2. Show Contacts " << endl;
        cout << "3. Contact Search " << endl;
        cout << "4. Contact Delete " << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                if (count >= MAX) { cout << "Phonebook full hai!" << endl; break; }
                cout << "Name: "; cin >> contacts[count].name;
                cout << "Phone: "; cin >> contacts[count].phone;
                cout << "Email: "; cin >> contacts[count].email;
                count++;
                cout << "Contact saved !" << endl;
                break;

            case 2:
                if (count == 0) { cout << "contact not found !" << endl; break; }
                for (int i = 0; i < count; i++) {
                    cout << i+1 << ". " << contacts[i].name<< " | " << contacts[i].phone << " | " << contacts[i].email << endl;
                }
                break;

            case 3: {
                string searchName;
                cout << "Name : "; cin >> searchName;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].name == searchName) {
                        cout << " Phone: " << contacts[i].phone
                             << " | Email: " << contacts[i].email << endl;
                        found = true;
                    }
                }
                if (!found) cout << "Contact not found !" << endl;
                break;
            }

            case 4: {
                string delName;
                cout << "contact name: "; cin >> delName;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].name == delName) {
                        contacts[i] = contacts[count - 1]; 
                        count--;
                        cout << "Contact deleted !" << endl;
                        found = true; break;
                    }
                }
                if (!found) cout << "Contact not found !" << endl;
                break;
            }

            case 5:
                cout << "Contact System closed ." << endl;
                break;

            default:
                cout << "Wrong choice!" << endl;
        }
    } while (choice != 5);
}