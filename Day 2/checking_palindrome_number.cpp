#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number -> \n";
    cin>>n;
    
    int revnum = 0;
    int x= n;
    while(n>0){

     int rem= n%10;
     revnum= revnum*10 + rem;
        n = n/10;
    }
    if(revnum==x){
        cout<<"yes its palindrome";
    }
    else
    cout<<"not a palindrome !!";
}