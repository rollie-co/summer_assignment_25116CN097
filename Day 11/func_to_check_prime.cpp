#include<iostream>
using namespace std;
int prime(int a){

    if(a==0 || a==1){
        return 0;
    }
   for(int i =2;  i<a; i++){
     if(a%i==0){
        return 0;
     }
   }
return 1;
}
int main(){
    int n;
    cout<<"enter the number to check prime ?\n";
    cin>>n;
    
    if(prime(n)==1){
        cout<<"yes its a prime";
    }
    else{
        cout<<"not a prime try again..";
    }
}