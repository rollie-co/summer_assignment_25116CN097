#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;

cout<<"enter the elements"<<endl;
    int num[100];
    //// take input from user ............
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }
        cout<<"even numbers -> ";
    for(int i = 0; i<size; i++){
     if(num[i]%2==0){
        cout<<num[i]<<" ";
     }
    }
    cout<<endl;
    cout<<"odd numbers -> ";
    for(int i = 0; i<size; i++){
     if(num[i]%2 !=0){
        cout<<num[i]<<" ";
     }
    }
  
}