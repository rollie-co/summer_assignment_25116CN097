#include<iostream>
using namespace std;
int main (){
    int a,b,temp ;
    cout<<" give two numbers -> \n";
    cout<<"1. ";
    cin>>a;
    cout<< "2. ";
    cin>>b;
    
    temp = a;
    a = b;
    b =temp;

    cout<<"number after swapping -> \n"<< "1. "<<a<<endl<<"2. "<<b<<endl;
}