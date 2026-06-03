#include<iostream>
using namespace std;
int main (){
    cout<<"FINDING LCM --> "<<endl;   /// keseeee hogaaa yeee @#!#@!@#!
    int a,b;
    cout<<"1. ";
    cin>>a;
    cout<<"2. ";
    cin>>b; 

    int product;
    product= a*b;  
    cout<<"the lcm of "<<a<<","<<b<<" -> ";         
int rem;
while(b!=0){                             ///ek formula hota hai -> 
    rem = a%b;                            // lcm(a,b) x hcf(a,b) = axb      
    a = b;                                                            
    b= rem;                  // lcm(a,b)= axb / hcf(a,b)
}
int lcm;
lcm = product / a;
cout<<lcm<<endl;
}