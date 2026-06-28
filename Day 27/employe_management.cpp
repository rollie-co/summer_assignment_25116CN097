#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empId;
    string name;
    string department;
    double salary;
};

void displayEmployee(Employee e) {
    cout << "EMP ID     : " << e.empId << endl;
    cout << "Name       : " << e.name << endl;
    cout << "Department : " << e.department << endl;
    cout << "Salary     : Rs. " << e.salary << endl;
    cout << "-----------------------------" << endl;
}
int main() {
    int n;
    cout << "=== Employee Management System ===" << endl;
    cout << "enter number of employee: "; cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << " ki detail:" << endl;
        cout << "Employee ID: "; cin >> emp[i].empId;
        cout << "Naam: "; cin >> emp[i].name;
        cout << "Department: "; cin >> emp[i].department;
        cout << "Salary: "; cin >> emp[i].salary;
    }
    cout << "\n======= All Employee Records =======" << endl;
    for (int i = 0; i < n; i++) {
        displayEmployee(emp[i]);
    }

    string dept;
    cout << "\nenter employee department "; cin >> dept;
    cout << "\n--- " << dept << " Department ---" << endl;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (emp[i].department == dept) {
            displayEmployee(emp[i]);
            found = true;
        }
    }
    if (!found) cout << "no employee in this department." << endl;

}