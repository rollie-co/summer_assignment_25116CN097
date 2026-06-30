#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n, target;
    cout << "Array size: "; cin >> n;
    int arr[n];

    cout << "Elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Target sum batao: "; 
    cin >> target;

    unordered_set<int> seen;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i]; 
        if (seen.find(complement) != seen.end()) {
            cout << "Pair mila: (" << complement << ", " << arr[i] << ")" << endl;
            found = true;
        }
        seen.insert(arr[i]); 
    }
    if (!found){
        cout << "no pair found !" << endl;
    }
}