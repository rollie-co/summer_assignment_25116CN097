#include <iostream>
#include <string>
using namespace std;

struct Student {                      // Student structure (blueprint)
    int rollNo;
    string name;
    int age;
    float marks;
};

void displayStudent(Student s) {
    cout << "roll no : " << s.rollNo << endl;
    cout << "name    : " << s.name << endl;
    cout << "age    : " << s.age << endl;
    cout << "marks   : " << s.marks << endl;
    cout << "-----------------------------" << endl;
}
int main() {
    int n;
    cout << "=== Student Record Management System ===" << endl;
    cout << "enter number of students : "; cin >> n;

    Student students[n]; 

    for (int i = 0; i < n; i++) {                                               // input ...
        cout << "\nStudent " << i + 1 << " ki detail: " << endl;
        cout << "Roll No: "; cin >> students[i].rollNo;
        cout << "Naam: "; cin >> students[i].name;
        cout << "Umar: "; cin >> students[i].age;
        cout << "Marks: "; cin >> students[i].marks;
    }

    cout << "\n========= All Student Records =========" << endl;
    for (int i = 0; i < n; i++) {
        displayStudent(students[i]);
    }

    int topIdx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topIdx].marks)
            topIdx = i;
    }
    cout << "\n max marks: " << students[topIdx].name << " (" << students[topIdx].marks << ")" << endl;
}