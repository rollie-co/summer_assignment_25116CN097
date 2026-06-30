#include <iostream>
#include <string>
using namespace std;
const int MAX = 10;

string names[MAX];
int rollNo[MAX];
float marks[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        cout << "Records full !" << endl;
        return;
    }
    cout << "Roll No: "; cin >> rollNo[count];
    cout << "Naam: "; cin >> names[count];
    cout << "Marks: "; cin >> marks[count];
    count++;
    cout << "Student added " << endl;
}

void displayAll() {
    if (count == 0) { cout << "no records " << endl; return; }
    cout << "\n--- all students ---" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Roll: " << rollNo[i] << " | Naam: " << names[i]
             << " | Marks: " << marks[i] << endl;
    }
}

int findTopper() {
    int topIdx = 0;
    for (int i = 1; i < count; i++)
        if (marks[i] > marks[topIdx]) topIdx = i;
    return topIdx;
}

void searchStudent(string name) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (names[i] == name) {
            cout << "FOUND ! Roll: " << rollNo[i] << " | Marks: " << marks[i] << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Student not found !" << endl;
}

float calculateAverage() {
    if (count == 0) return 0;
    float total = 0;
    for (int i = 0; i < count; i++) total += marks[i];
    return total / count;
}

string toUpperCase(string s) {
    for (char &c : s) c = toupper(c);
    return s;
}

string getStatus(float m) {
    return (m >= 33) ? "PASS" : "FAIL";
}

int main() {
    int choice;
    cout << "===  Project: Student Management ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Student Add " << endl;
        cout << "2. show all students " << endl;
        cout << "3. Topper ?" << endl;
        cout << "4. Student Search " << endl;
        cout << "5. Class Average " << endl;
        cout << "6. Naam Uppercase mein " << endl;
        cout << "7. Pass/Fail Status " << endl;
        cout << "8. Exit" << endl;
        cout << "Choice: "; cin >> choice;

        switch (choice) {
            case 1:
                addStudent();  
                break;

            case 2:
                displayAll();  
                break;

            case 3:
                if (count == 0) { cout << "Koi record nahi!" << endl; break; }
                {
                    int idx = findTopper(); 
                    cout << "Topper: " << names[idx] << " (" << marks[idx] << " marks)" << endl;
                }
                break;

            case 4: {
                string name;
                cout << "Naam: "; cin >> name;
                searchStudent(name);  
                break;
            }

            case 5:
                cout << "Class Average: " << calculateAverage() << endl;  
                break;

            case 6: {
                string name;
                cout << "Naam: "; cin >> name;
                cout << "Uppercase: " << toUpperCase(name) << endl;  
                break;
            }

            case 7:
                if (count == 0) { cout << "no records" << endl; break; }
                for (int i = 0; i < count; i++)
                    cout << names[i] << ": " << getStatus(marks[i]) << endl;  
                break;

            case 8:
                cout << "Project closed " << endl;
                break;

            default:
                cout << "wrong choice!" << endl;
        }
    } while (choice != 8);

    return 0;
}