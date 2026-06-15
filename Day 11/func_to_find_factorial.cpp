#include<iostream>
using namespace std;
int factorial(int a){
    int factorial =1;
    for(int i = 1; i<=a; i++){
        factorial = factorial * i;
    }
    return factorial;
}
int main(){
    int n ;
    cout<<"enter the number jiska factorial chhahiy \n";
    cin>>n;

    cout<<"the factorial is "<<factorial(n)<<endl;
}