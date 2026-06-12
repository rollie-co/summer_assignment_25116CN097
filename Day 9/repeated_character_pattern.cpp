#include <iostream>
using namespace std;                                                         // output ->
int main(){   
    char a,b;                                                                // A
 for( a = 'A'; a<= 'E'; a++){                                                // BB
    for(b  = 'A'; b<= a; b++){                                               // CCC
        cout<<a;                                                             // DDDD
    }                                                                        // EEEEE
    cout<<endl;
 }
}