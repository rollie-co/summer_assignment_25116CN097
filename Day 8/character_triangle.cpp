#include <iostream>
using namespace std;                                                         // output ->
int main(){                                                                  // A                           
    char  a;                                                                 // AB
    char  b;                                                                 // ABC
 for(a = 'A'; a<= 'E'; a++){                                                 // ABCD
        for( b = 'A'; b<= a; b++){                                           // ABCDE
            cout<<b;
        }
        cout<<endl;
    }
}