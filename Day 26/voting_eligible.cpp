#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    char citizen;

    cout << "=== Voting Eligibility System ===" << endl;
    cout << "Naam: "; 
    cin >> name;
    cout << "(Age): ";
     cin >> age;
    cout << " are u Indian citizen ? (y/n): ";
     cin >> citizen;

    
    if (age >= 18 && (citizen == 'y' || citizen == 'Y')) {
        cout << "\n" << name << ", yes u are eligible " << endl;
    } else if (age < 18) {
        cout << "\n" << name << ", not eligible ." << endl;
    } else {
        cout << "\n" << name << ", only for indian citizens" << endl;
    }

}