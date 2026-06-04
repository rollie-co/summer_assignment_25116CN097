#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;

    int original = n;
    int sum = 0;

while(n>0){
    int rem= n%10;
    n = n/10;
    sum = sum + (rem*rem*rem);
}

if(sum==original){
    cout<<" yes its armstrong number "<<endl;
}
else
cout<<" nahh its not "<<endl;
}



