#include<iostream>
using namespace std;                                                    /// output -> 
int main (){                                                            // 12345
    for (int i = 1; i<= 6; i++){                                        // 1234
     for(int j = 1 ; j<= 6-i; j++){                                     // 123
        cout<<j;                                                        // 12
     }                                                                  // 1
cout<<endl;
    }
}