#include<iostream>
using namespace std;

int main(){
    int sum =0;
    int avg;
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;

cout<<"enter the elements"<<endl;
    int num[100];
    //// take input from user ............
    for(int i = 0; i<size; i++){
        cin >> num[i];
    
        sum = sum +num[i] ;
     avg = sum/size;
    }
    cout<<"the sum is -> \n";
    cout<<sum<<endl;

    cout<<"the avg is ->\n";
    cout<<avg<<endl;


}