#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter number \n";
    cin>>n;
cout<<endl;
    
int greatest = 0;
for(int i = 2; i<=n; i++){
    if(n%i==0){

 bool isprime = 1;

    for(int j =2; j<i; j++){
    if(i%j==0){
        isprime=0;
        break;
    }
}
if(isprime){
    greatest = i;
   
}
 }              
  }
  cout<<"the largest prime factor is -> \n"<<greatest<<endl;

}

