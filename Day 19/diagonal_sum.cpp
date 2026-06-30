#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Matrix size (n x n): "; 
    cin >> n;
    int a[n][n];

    cout << "Matrix :\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int primaryDiag = 0, secondaryDiag = 0;

    for (int i = 0; i < n; i++) {
        primaryDiag += a[i][i];        // Primary: row index = col index
        secondaryDiag += a[i][n-1-i];  // Secondary: row + col = n-1
    }

    cout << "Primary Diagonal Sum: " << primaryDiag << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiag << endl;

}