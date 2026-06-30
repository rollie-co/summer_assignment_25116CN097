#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "String enter karo: "; 
    cin >> str;

    int vowels = 0, consonants = 0;

    for (char c : str) {
        char lower = tolower(c); 

        if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') {
            vowels++;
        } 
        else if (isalpha(c)) {
            consonants++;
    }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

}