
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                                                         // random seed 
    int secret = rand() % 100 + 1;                                           // 1 to 100 random number
    int guess, attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << " guess numebr from 1 - 100 !" << endl;

    do {
        cout << "enter ur guess : ";
        cin >> guess;
        attempts++;

        if (guess < secret)
            cout << "Chota hai! try bigger one ." << endl;
        else if (guess > secret)
            cout << "Bada hai! try smaller." << endl;
        else
            cout << "BINGOOO! " << attempts << " attempts taken" << endl;

    } while (guess != secret);

    return 0;
}