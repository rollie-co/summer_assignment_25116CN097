#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    cout << "Array size: "; cin >> n;
    int arr[n];

    cout << "Elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_set<int> uniqueElements;
    for (int i = 0; i < n; i++) {
        uniqueElements.insert(arr[i]);
    }

    cout << "Array after removing duplicates: ";
    for (int val : uniqueElements){
        cout << val << " ";
    }
    cout << endl;

    cout << "Total unique elements: " << uniqueElements.size() << endl;
}