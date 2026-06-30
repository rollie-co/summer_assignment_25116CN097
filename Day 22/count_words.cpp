#include <iostream>
#include <sstream> 
using namespace std;
int main() {
    string sentence;
    cout << "Sentence enter karo: ";
    getline(cin, sentence); 

    stringstream ss(sentence);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << "Total Words: " << count << endl;
}