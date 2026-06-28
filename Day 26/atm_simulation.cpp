#include <iostream>
using namespace std;

int main() {
    int pin;
    double balance = 10000.0;
    int choice;
    const int correctPin = 1234;

    cout << "=== ATM Machine ===" << endl;                          /// pin -> 1234
    cout << "PIN ? : "; cin >> pin;

    if (pin != correctPin) {
        cout << "wrong pin access denied" << endl;
    }

    cout << " Welcome ! " << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Balance Check" << endl;
        cout << "2. Withdraw " << endl;
        cout << "3. Deposit " << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                cout << "your balance: Rs. " << balance << endl;
                break;

            case 2: {      /// withdraw..
                double amount;
                cout << "amount to be withdraw ? : Rs. "; cin >> amount;
                if (amount > balance)
                    cout << "Insufficient balance!" << endl;
                else {
                    balance -= amount;
                    cout << " new balance: Rs. " << balance << endl;
                }
                break;
            }

            case 3: {          /// deposit..
                double amount;
                cout << "amount to be deposited ? : Rs. "; cin >> amount;
                balance += amount;
                cout << " New balance: Rs. " << balance << endl;
                break;
            }

            case 4:
                cout << "Thank you! " << endl;
                break;

            default:
                // Koi aur number enter kiya to
                cout << " wrong choice ! choose btw  (1-4) ." << endl;
        }

    } while (choice != 4);
}