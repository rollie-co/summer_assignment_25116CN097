#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int n;
    cout << "Kitne naam hain: "; 
    cin >> n;
    string names[n];

    cout << "Naam daalo:\n";
    for (int i = 0; i < n; i++){
        cin >> names[i];
    }

    sort(names, names + n);

    cout << "Sorted Names:\n";
    for (int i = 0; i < n; i++){
        cout << names[i] << endl;
    }

}