#include<iostream>
using namespace std;
int main (){
    int n, count = 0;
    cout << "enter the number jiska sum karna hai -> \n ";
    cin>> n;
    
    int sum = 0;
    int i = 1;
    while(n>0){
        int rem = n%10;
        cout<<"the digits are : "<<rem<< endl;
        n = n/10;
        sum = sum +rem ;
        i = i+ 1;
        count++;  
    }
    cout<<"the total sum of digits are : "<< sum<< endl;

}