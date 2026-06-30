#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "=== Menu Driven Calculator ===" << endl;

    do {
        cout << "\n--- Operations ---" << endl;
        cout << "1.  Addition (+)" << endl;
        cout << "2.  Subtraction (-)" << endl;
        cout << "3.  Multiplication (*)" << endl;
        cout << "4.  Division (/)" << endl;
        cout << "5.  Modulus (%) " << endl;
        cout << "6.  Power (a^b)" << endl;
        cout << "7.  Square Root" << endl;
        cout << "8.  Exit" << endl;
        cout << "Choice: "; cin >> choice;

        if (choice >= 1 && choice <= 6) {
            cout << "a = "; 
            cin >> a;
            if (choice != 7) { 
            cout << "b = "; 
            cin >> b; 
        }
        }
        switch (choice) {
            case 1:
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                cout << "Result: " << a * b << endl;
                break;
            case 4:
                // Division by zero check
                if (b == 0){
                 cout << "Error: 0 se divide nahi kar sakte!" << endl;
                }
                else cout << "Result: " << a / b << endl;
                break;
            case 5:
                cout << "Result: " << (int)a % (int)b << endl;
                break;
            case 6:
                cout << "Result: " << pow(a, b) << endl;
                break;
            case 7:
                cout << "Number: "; cin >> a;
                if (a < 0) cout << "Negative number ka square root nahi hota!" << endl;
                else cout << "Result: " << sqrt(a) << endl;
                break;
            case 8:
                cout << "Calculator program ended." << endl;
                break;
            default:
                cout << "wrong choixe!" << endl;
        }
    } while (choice != 8);
}