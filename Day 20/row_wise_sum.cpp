#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Rows & Columns: "; 
    cin >> r >> c;
    int a[r][c];

    cout << "Matrix :\n";
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }

    cout << "Row-wise Sum:\n";
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++){
            sum += a[i][j];
        }
        cout << "Row " << i + 1 << " Sum: " << sum << endl;
    }
}