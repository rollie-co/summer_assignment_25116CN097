#include<iostream>
using namespace std;
int main(){                                                         // output ->
int n = 5;                                                          //      1
    for(int i =1 ; i<=n; i++){                                      //     121
        for(int j =i; j<=n; j++){                                   //    12321            
            cout<<" ";                                              //   1234321  
        }                                                           //  123454321
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        for(int j = i-1; j>=1 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
}