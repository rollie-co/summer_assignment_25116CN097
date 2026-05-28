#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<"enter nuumber jiska table chahiy : \n";
    cin>>n;
    int i=1;
    int result;
    
    while(i<=10){
         result= n*i;
    cout << n << "x" << i << "=" << result << endl;
    i= i+1;
    }
}