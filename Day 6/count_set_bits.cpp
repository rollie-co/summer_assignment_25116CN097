#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cout<<"enter number \n";
    cin>>n;
    
while(n!=0){
int bit = n & 1;
   
   if(bit==1){
    count++;
   }
   n= n>>1;
 }
  cout<<"the number of bits are ->\n"<<count<<endl;
}