#include <iostream>
#include <string>
using namespace std;

struct Account {
    int accNo;
    string name;
    double balance;
};

int main() {
    const int MAX = 5;
    Account accounts[MAX];
    int count = 0;
    int choice;

    cout << "=== Bank Account System ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Create New Account " << endl;
        cout << "2. Deposit " << endl;
        cout << "3. Withdraw " << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Check All Accounts" << endl;
        cout << "6. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                if (count >= MAX) { cout << "Max accounts limit !" << endl; break; }
                accounts[count].accNo = 1001 + count;
                cout << "Naam: "; cin >> accounts[count].name;
                cout << "Opening Balance: Rs. "; cin >> accounts[count].balance;
                cout << "Account No. " << accounts[count].accNo << " account created succesfully !" << endl;
                count++;
                break;

            case 2: {
                int accNo; double amt;
                cout << "Account No.: "; cin >> accNo;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].accNo == accNo) {
                        cout << "Amount: Rs. "; cin >> amt;
                        accounts[i].balance += amt;
                        cout << "New Balance: Rs. " << accounts[i].balance << endl;
                        found = true; 
                        break;
                    }
                }
                if (!found) cout << "No Account found!" << endl;
                break;
            }

            case 3: {
                int accNo; double amt;
                cout << "Account No.: "; cin >> accNo;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].accNo == accNo) {
                        cout << "Amount: Rs. "; cin >> amt;
                        if (amt > accounts[i].balance) cout << "Insufficient balance!" << endl;
                        else {
                            accounts[i].balance -= amt;
                            cout << "New Balance: Rs. " << accounts[i].balance << endl;
                        }
                        found = true; break;
                    }
                }
                if (!found) cout << "Account not found!" << endl;
                break;
            }

            case 4: {
                int accNo;
                cout << "Account No.: "; cin >> accNo;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (accounts[i].accNo == accNo) {
                        cout << accounts[i].name << " Balance: Rs. " << accounts[i].balance << endl;
                        found = true; break;
                    }
                }
                if (!found) cout << "Account not found!" << endl;
                break;
            }

            case 5:
                if (count == 0) { cout << "no account!" << endl; break; }
                for (int i = 0; i < count; i++) {
                    cout << "Acc No: " << accounts[i].accNo
                         << " | Naam: " << accounts[i].name
                         << " | Balance: Rs. " << accounts[i].balance << endl;
                }
                break;

            case 6:
                cout << "Bank System closed." << endl;
                break;

            default:
                cout << "Wrong choice!" << endl;
        }
    } while (choice != 6);
}