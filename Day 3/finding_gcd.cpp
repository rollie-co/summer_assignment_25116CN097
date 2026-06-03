#include<iostream>
using namespace std;
int main (){
int a,b;
cout<<"ENTER NUMBERS TO FIND GCD"<<endl;
    cout<<"1. ";
    cin>>a;
    cout<<"2. ";
    cin>>b;
cout<<"gcd of "<<a<<","<<b<<" --> ";

int rem;
while(b!=0){
    rem = a%b;
    a = b;
    b = rem;
}
cout<<a<<endl;

}




   