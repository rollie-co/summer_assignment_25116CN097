#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 10;
    string names[MAX];      
    int rollNo[MAX];        
    float marks[MAX][3];    
    int n;

    cout << "=== Student Record System (Arrays + Strings) ===" << endl;
    cout << "number of students : "; cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Roll No: "; cin >> rollNo[i];
        cout << "Naam: "; cin >> names[i];
        for (int j = 0; j < 3; j++) {
            cout << "Subject " << j + 1 << " Marks: ";
            cin >> marks[i][j];
        }
    }

    cout << "\n========= Student Records =========" << endl;
    for (int i = 0; i < n; i++) {
        float total = 0;
        for (int j = 0; j < 3; j++) total += marks[i][j];
        float avg = total / 3;

        cout << "Roll No: " << rollNo[i] << " | Naam: " << names[i]
             << " | Total: " << total << " | Average: " << avg << endl;
    }

    int topIdx = 0;
    float topAvg = (marks[0][0] + marks[0][1] + marks[0][2]) / 3;
    for (int i = 1; i < n; i++) {
        float avg = (marks[i][0] + marks[i][1] + marks[i][2]) / 3;
        if (avg > topAvg) { topAvg = avg; topIdx = i; }
    }
    cout << "\nClass Topper: " << names[topIdx] << " (Average: " << topAvg << ")" << endl;

    string searchName;
    cout << "\n which student name to search ? : "; cin >> searchName;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (names[i] == searchName) {
            cout << "FOUND ! Roll No ->  " << rollNo[i] << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Student not found!" << endl;
}