#include<iostream>
using namespace std;
int main (){
int a,b;
    cout<<"initial number -> \n";
    cin>>a;
    cout<<"final number -> \n";
    cin>>b;
    
   cout<<"the prime numbers are \n";

    for(int i = a ; i<=b; i++){
        bool isprime=1;
        if(i<=1){
            isprime=0;
        }

        for(int j =2 ; j<i ; j++){
            if(i%j ==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            cout<<i<<endl;
           
        }
    }
}