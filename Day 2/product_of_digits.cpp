#include<iostream>
using namespace std;
int main(){      

    int n, count= 0;
    cout<<"give the number -> \n";
    cin>> n;

    int result=1;
    int i = 1;
    while(n>0){
        int rem = n%10;
        cout<<"the digits are : "<<rem<<endl;
        n = n/10;
        result = result*rem;
        i= i+1;
        count++;
    }
    cout<<"the product of digits are : \n"<<result<<endl;
}