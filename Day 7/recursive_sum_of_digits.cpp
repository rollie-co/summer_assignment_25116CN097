#include<iostream>
using namespace std;
int sum(int n ){
///// base case....
if(n==0){
    return 0;
} 
/////// processing...
 int choti = sum(n/10);
 int badi = (n%10) + choti;
  
           return badi;
}
int main(){
    int n ;
    cout<<"enter the digits"<<endl;
    cin>>n;

    cout<<sum(n)<<endl;
}