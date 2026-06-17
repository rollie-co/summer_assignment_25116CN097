#include<iostream>
using namespace std;
int palindrome(int n){

int revnum = 0;
    int x= n;
    while(n>0){
     int rem= n%10;
     revnum= revnum*10 + rem;
        n = n/10;
    }
    if(revnum==x){
        return 1;
    }
else 
return 0;
}
int main(){
    int n;
    cout<<"enter the number -> \n";
    cin>>n;

    if(palindrome(n)==1){
        cout<<"yes its a palindrome";
    }
    else{
        cout<<"not a palindrome try again..";
    }
}