#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 1, 3, 2, 1};
    int n = 6;

    cout<<"elements     frequency \n";
    for(int i = 0; i < n; i++) {

        bool alreadyCounted = false;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                alreadyCounted = true;
                break;
            }
        }
        if(alreadyCounted) {
            continue;
        }
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        cout << arr[i] << "       ->     " << count << endl;
    }
}