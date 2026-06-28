#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double basicSalary, hra, da, ta, pf, netSalary;

    cout << "=== Salary Management System ===" << endl;
    cout << "Employee Name: "; cin >> name;
    cout << "Basic Salary: Rs. "; cin >> basicSalary;

    // Allowances calculate (standard percentages)
    hra = 0.20 * basicSalary;   // House Rent Allowance - 20%
    da  = 0.10 * basicSalary;   // Dearness Allowance   - 10%
    ta  = 0.05 * basicSalary;   // Travel Allowance     - 5%

    // Deductions
    pf  = 0.12 * basicSalary;   // Provident Fund       - 12%

    // Net salary = basic + allowances - deductions
    netSalary = basicSalary + hra + da + ta - pf;

    // Salary slip 
    cout << "\n========== Salary Slip ==========" << endl;
    cout << "Employee   : " << name << endl;
    cout << "----------------------------------" << endl;
    cout << "Basic Salary      : Rs. " << basicSalary << endl;
    cout << "HRA (20%)         : Rs. " << hra << endl;
    cout << "DA  (10%)         : Rs. " << da << endl;
    cout << "TA  (5%)          : Rs. " << ta << endl;
    cout << "----------------------------------" << endl;
    cout << "PF Deduction (12%): Rs. " << pf << endl;
    cout << "==================================" << endl;
    cout << "NET SALARY        : Rs. " << netSalary << endl;

}