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

    bool isSymmetric = true;

    for (int i = 0; i < n; i++) {                                         // Compare a[i][j] with a[j][i]
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric){
        cout << "Matrix Symmetric hai!" << endl;
    }
    else{
        cout << "Matrix Symmetric nahi hai!" << endl;
    }
}