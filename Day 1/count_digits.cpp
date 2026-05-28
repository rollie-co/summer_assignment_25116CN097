#include<iostream>
using namespace std;
int main(){
    int n, count =0;
    cout<<"enter the number : \n";
    cin>>n;

    int temp=n;
    if(n==0){
        count = 1;
    }
    while(n>0){
        int rem = n%10;
        cout<<"the digits are :"<<rem<<endl;
        n = n/10;
        count ++;
    }
    cout<<"total digits in this number is "<<count<<endl;
}