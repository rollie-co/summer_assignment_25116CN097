#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "size of array : "; 
    cin >> n;
    int arr[n - 1];

    cout << "Enter Elements  " << n << " jisme se ek missing): ";
    for (int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }

    // Formula: Sum of 1 to n = n*(n+1)/2
    // Missing number = Expected Sum - Actual Sum
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++){
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;
    cout << "Missing Number: " << missing << endl;

}