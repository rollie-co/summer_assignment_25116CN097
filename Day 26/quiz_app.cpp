#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0;
    int ans;

    cout << "=== Quiz Application ===" << endl;
    cout << "Har sahi answer pe 1 mark milega.\n" << endl;

    cout << "Q1. C++ mein cout ka use kiya jata hai?" << endl;
    cout << "1. Input ke liye  2. Output ke liye  3. Loop ke liye  4. Function ke liye" << endl;
    cout << "Answer: "; cin >> ans;
    if (ans == 2) { cout << "Sahi!\n"; score++; }
    else cout << "Galat! Sahi answer: 2\n";
    
    cout << "\nQ2. C++ mein array index kahan se shuru hota hai?" << endl;
    cout << "1. 1   2. -1   3. 0   4. 2" << endl;
    cout << "Answer: "; cin >> ans;
    if (ans == 3) { cout << "Sahi!\n"; score++; }
    else cout << "Galat! Sahi answer: 3\n";
    
    cout << "\nQ3. C++ mein loop ke liye kaunsa keyword use hota hai?" << endl;
    cout << "1. repeat   2. loop   3. for   4. iterate" << endl;
    cout << "Answer: "; cin >> ans;
    if (ans == 3) { cout << "Sahi!\n"; score++; }
    else cout << "Galat! Sahi answer: 3\n";

    cout << "\nQ4. int ka size kitna hota hai (bytes mein)?" << endl;
    cout << "1. 1   2. 2   3. 4   4. 8" << endl;
    cout << "Answer: "; cin >> ans;
    if (ans == 3) { cout << "Sahi!\n"; score++; }
    else cout << "Galat! Sahi answer: 3\n";

    cout << "\nQ5. C++ program ka entry point kaunsa function hai?" << endl;
    cout << "1. start()   2. begin()   3. run()   4. main()" << endl;
    cout << "Answer: "; cin >> ans;
    if (ans == 4) { cout << "Sahi!\n"; score++; }
    else cout << "Galat! Sahi answer: 4\n"
    cout << "\n end of program...." << endl;

    cout << "Aapka Score: " << score << "/5" << endl;
    if (score == 5) cout << "Excellent!" << endl;
    else if (score >= 3) cout << "Accha kiya! Aur practice karo." << endl;
    else cout << "Mehnat karo, agle baar better karoge!" << endl;
}