#include <iostream>
using namespace std;
int main() {
    int n, d;
    cout << "Array size: "; 
    cin >> n;
    int arr[n];

    cout << "Elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Kitni baar left rotate karna hai: "; 
    cin >> d;
    d = d % n; 

    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i - d + n) % n] = arr[i];
    }

    cout << "Left Rotated Array: ";
    for (int i = 0; i < n; i++){
        cout << temp[i] << " ";
    }
    cout << endl;

}