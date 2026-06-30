#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cout << "Array size: "; cin >> n;
    int arr[n];

    cout << "Elements : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, result = arr[0];
    for (auto &pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            result = pair.first;
        }
    }

    cout << "Maximum Frequency Element: " << result<< " (Frequency: " << maxFreq << ")" << endl;

}