#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    
    int orig = n;
int sum =0;
    for(int i = 1 ; i<n ; i++){
    
        if(n%i==0){
        sum = sum+ i;
        }
    }
    if(sum==orig){
        cout<<"yes it's a perfect number !!"<<endl;
    }
    else
    cout<<"nah try again.."<<endl;
}