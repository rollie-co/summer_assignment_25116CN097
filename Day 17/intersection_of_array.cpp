#include <iostream>
#include <unordered_set>
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

    unordered_set<int> set1(arr1, arr1 + n1);
    unordered_set<int> result; 

    for (int i = 0; i < n2; i++) {
        if (set1.find(arr2[i]) != set1.end()) {
            result.insert(arr2[i]);
        }
    }

    cout << "Intersection of Arrays: ";
    if (result.empty()) cout << "no common element !" << endl;
    else {
        for (int val : result) cout << val << " ";
        cout << endl;
    }
}