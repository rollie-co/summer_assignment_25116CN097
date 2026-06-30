#include <iostream>
#include <set>
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

    set<int> unionSet;

    for (int i = 0; i < n1; i++){
        unionSet.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++){
        unionSet.insert(arr2[i]);
    }

    cout << "Union of Arrays: ";
    for (int val : unionSet){
        cout << val << " ";
    }
    cout << endl;
}