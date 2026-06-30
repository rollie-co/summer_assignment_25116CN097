#include <iostream>
using namespace std;
int main() {
    int n1, n2;

    cout << "Array 1 ka size: "; 
    cin >> n1;
    int arr1[n1];
    cout << "Array 1 ke elements: ";
    for (int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Array 2 ka size: "; 
    cin >> n2;
    int arr2[n2];
    cout << "Array 2 ke elements: ";
    for (int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    int merged[n1 + n2];

    for (int i = 0; i < n1; i++){
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++){
        merged[n1 + i] = arr2[i];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++){
        cout << merged[i] << " ";}
    cout << endl;
}