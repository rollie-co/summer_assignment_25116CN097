#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo;
    int sub[5];                                                               // 5 subjects marks
    string subName[5] = {"Maths", "Science", "English", "Hindi", "Computer"};
    int total = 0;
    float percentage;
    string grade, result;

    cout << "=== Marksheet Generation System ===" << endl;
    cout << "Student Name: "; cin >> name;
    cout << "Roll No: "; cin >> rollNo;

    for (int i = 0; i < 5; i++) {                                    /// 5 sub marks input 
        cout << subName[i] << " ke marks (out of 100): ";
        cin >> sub[i];
        total += sub[i];
    }

    percentage = total / 5.0;

    if (percentage >= 90)      grade = "A+";
    else if (percentage >= 80) grade = "A";
    else if (percentage >= 70) grade = "B";
    else if (percentage >= 60) grade = "C";
    else if (percentage >= 40) grade = "D";
    else grade = "F";

    result = "PASS";
    for (int i = 0; i < 5; i++) {
        if (sub[i] < 33) {
            result = "FAIL";
            break;
        }
    }
    
    cout << "\n==========================================" << endl;
    cout << "         OFFICIAL MARKSHEET               " << endl;
    cout << "==========================================" << endl;
    cout << "Naam    : " << name << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << subName[i] << "\t\t: " << sub[i] << "/100" << endl;
    }
    cout << "------------------------------------------" << endl;
    cout << "Total   : " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade   : " << grade << endl;
    cout << "Result  : " << result << endl;
    cout << "==========================================" << endl;

    return 0;
}