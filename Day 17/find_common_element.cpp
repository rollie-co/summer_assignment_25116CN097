#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n1, n2, n3;

    cout << "Array 1 size: "; 
    cin >> n1;
    int arr1[n1];
    cout << "Array 1 elements: ";
    for (int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Array 2 size: "; 
    cin >> n2;
    int arr2[n2];
    cout << "Array 2 elements: ";
    for (int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    cout << "Array 3 size: "; 
    cin >> n3;
    int arr3[n3];
    cout << "Array 3 elements: ";
    for (int i = 0; i < n3; i++){
        cin >> arr3[i];
    }

    unordered_set<int> set1(arr1, arr1 + n1);
    unordered_set<int> set2(arr2, arr2 + n2);

    cout << "Common Elements in all 3 arrays: ";
    unordered_set<int> printed; 
    bool found = false;

    for (int i = 0; i < n3; i++) {
        if (set1.count(arr3[i]) && set2.count(arr3[i]) && !printed.count(arr3[i])) {
            cout << arr3[i] << " ";
            printed.insert(arr3[i]);
            found = true;
        }
    }
    if (!found) cout << "no common element !";
    cout << endl;
}