#include<iostream>
using namespace std;
int main(){                                                                         // output ->
    int n = 5;                                                                    //   A
    for(int i = 1; i <= n; i++){                                                 //   ABA
    // spcae                                                                     //  ABCBA
        for(int j = 1; j <= n-i; j++){                                          //  ABCDCBA
            cout << " ";                                                        // ABCDEDCBA
        }
        for(int j = 1; j <= i; j++){
            cout << (char)('A' + j - 1); 
        }
        for(int j = i-1; j >= 1; j--){
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
}