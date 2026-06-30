#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;

    cout << "Matrix A Rows & Columns: "; 
    cin >> r1 >> c1;
    cout << "Matrix B Rows & Columns: "; 
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Multiplication not possible ! (A ke columns != B ke rows)" << endl;
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    cout << "Matrix A :\n";
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            cin >> a[i][j];
        }
    }

    cout << "Matrix B :\n";
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {                           /// result[i][j] = sum of a[i][k] * b[k][j]
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}