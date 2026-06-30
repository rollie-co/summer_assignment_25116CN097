#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Rows & Columns: "; 
    cin >> r >> c;

    int a[r][c], b[r][c], sum[r][c];

    cout << "Matrix A :\n";
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
        cin >> a[i][j];
        }
    }
    cout << "Matrix B :\n";
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
        cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sub[j] = a[i][j] - b[i][j];
        }
    }
    cout << "Sub Matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }
}