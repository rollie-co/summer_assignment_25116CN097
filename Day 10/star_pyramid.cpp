#include<iostream>
using namespace std;
int main(){                                                             // output -> 
int n = 5;   
    for(int i =1 ; i<=n; i++){                                          //    *
        // 1. spaces                                                    //   ***
        for(int j =1; j<= n-i; j++){                                   //   *****
            cout<<" ";                                                 //  *******
        }                                                              // *********
        // 2. loop for "*" 
        for(int j =1 ; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}