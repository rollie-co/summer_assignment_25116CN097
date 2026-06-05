#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int orig = n;
int sum = 0;
while(n>0){
    int rem = n%10;
    n = n/10;
int factorial =1;
    for(int i = 1; i <=rem; i++){
        factorial = factorial*i;
    }
    sum += factorial;  
}
if(sum==orig){
    cout<<"yes its a strong number !!"<<endl;
}
else 
cout<<"it's not try again..."<<endl;

}

