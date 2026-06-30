#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int MAX = 20;
    int arr[MAX], n = 0;
    int choice;

    cout << "=== Menu Driven Array Operations ===" << endl;

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1.  Array Input " << endl;
        cout << "2.  Array Print " << endl;
        cout << "3.  Element Search " << endl;
        cout << "4.  Array Sort (Ascending)" << endl;
        cout << "5.  Array Reverse  "<< endl;
        cout << "6.  Max Element " << endl;
        cout << "7.  Min Element " << endl;
        cout << "8.  Sum & Average " << endl;
        cout << "9.  Element Insert " << endl;
        cout << "10. Element Delete " << endl;
        cout << "11. Exit" << endl;
        cout << "Choice: "; 
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "how many elements ?: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "arr[" << i << "] = ";
                    cin >> arr[i];
                }
                break;

            case 2:
                cout << "Array: ";
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;

            case 3: {
                int key;
                bool found = false;
                cout << "element to be searched : ";
                cin >> key;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << key << " found at index " << i << endl;
                        found = true;
                    }
                }
                if (!found) cout << "element not found " << endl;
                break;
            }

            case 4:
                sort(arr, arr + n);
                cout << "Sorted !" << endl;
                break;

            case 5:
                for (int i = 0; i < n / 2; i++){ 
                    swap(arr[i], arr[n - 1 - i]);
                }
                cout << "Reversed !" << endl;
                break;

            case 6: {
                int mx = arr[0];
                for (int i = 1; i < n; i++){ 
                    if (arr[i] > mx){ mx = arr[i];}
                cout << "Max Element: " << mx << endl;
                break;}
            }

            case 7: {
                int mn = arr[0];
                for (int i = 1; i < n; i++){ if (arr[i] < mn){ mn = arr[i];}
                cout << "Min Element: " << mn << endl;
                break;}
            }

            case 8: {
                int sum = 0;
                for (int i = 0; i < n; i++) sum += arr[i];
                cout << "Sum: " << sum << " | Average: " << (float)sum / n << endl;
                break;
            }

            case 9: {
                if (n >= MAX) { 
                cout << "Array full hai!" << endl; break; }
                int pos, val;
                cout << "elemen to be inserted at (index): "; cin >> pos;
                cout << "Value: "; cin >> val;
                for (int i = n; i > pos; i--){arr[i] = arr[i - 1]; 
                arr[pos] = val;
                n++;
                cout << "Insert ho gaya!" << endl;
                break;}
            }

            case 10: {
                int pos;
                cout << "which index to be deleted : "; cin >> pos;
                for (int i = pos; i < n - 1; i++){ arr[i] = arr[i + 1]; 
                n--;
                cout << "Deleted !" << endl;
                break;}
            }

            case 11:
                cout << "Array System closed " << endl;
                break;

            default:
                cout << "wrong choice!" << endl;
        }
    } while (choice != 11);
}