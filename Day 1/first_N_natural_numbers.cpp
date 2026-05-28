#include <iostream>
using namespace std;
int main (){
    int n ;
    cout<<"write the number jiska sum nikalna hai -> \n";
    cin>>n;
    
    int sum = 0;
    int i =1;
    while(i<=n){
        sum = sum+i;
        i= i+1;
    }
       cout<<"the sum of this number is :"<<sum<<endl;
}