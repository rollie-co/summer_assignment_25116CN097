#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX = 5;
    string empNames[MAX];
    double empSalary[MAX];
    int count = 0;
    int choice;

    cout << "=== Mini Employee Management System ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Employee Add " << endl;
        cout << "2. Sabhi Employees " << endl;
        cout << "3. Highest Salary Employee" << endl;
        cout << "4. Total Salary Expense" << endl;
        cout << "5. Employee Search " << endl;
        cout << "6. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                if (count >= MAX) { cout << "Limit full !" << endl; break; }
                cout << "Naam: "; cin >> empNames[count];
                cout << "Salary: Rs. "; cin >> empSalary[count];
                count++;
                cout << "Employee added !" << endl;
                break;

            case 2:
                if (count == 0) { cout << "no employee!" << endl; break; }
                for (int i = 0; i < count; i++)
                    cout << i + 1 << ". " << empNames[i] << " - Rs. " << empSalary[i] << endl;
                break;

            case 3: {
                if (count == 0) { cout << "no employee!" << endl; break; }
                int maxIdx = 0;
                for (int i = 1; i < count; i++)
                    if (empSalary[i] > empSalary[maxIdx]) maxIdx = i;
                cout << "Highest Salary: " << empNames[maxIdx] << " - Rs. " << empSalary[maxIdx] << endl;
                break;
            }

            case 4: {
                double total = 0;
                for (int i = 0; i < count; i++) total += empSalary[i];
                cout << "Total Salary Expense: Rs. " << total << endl;
                break;
            }

            case 5: {
                string name;
                cout << "Naam: "; cin >> name;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (empNames[i] == name) {
                        cout << "FOUND ! Salary: Rs. " << empSalary[i] << endl;
                        found = true; break;
                    }
                }
                if (!found) cout << "Employee not found !" << endl;
                break;
            }

            case 6:
                cout << "System closed " << endl;
                break;

            default:
                cout << "wrong choice!" << endl;
        }
    } while (choice != 6);
}