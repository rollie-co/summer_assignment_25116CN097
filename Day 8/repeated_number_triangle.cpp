#include <iostream>
using namespace std;                                                         // output ->
int main(){                                                                  // 1
 for( int i = 1; i<=5; i++){                                                 // 22
    for(int j = 1; j<=i; j++){                                               // 333
        cout<<i;                                                             // 4444
    }                                                                        // 55555
    cout<<endl;
 }
}