#include<iostream>
using namespace std;
bool linear(int arr[], int n, int key){

    for(int i = 0; i<n; i++){
        if (arr[i]==key){
          return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    int key;
    cout<<"enter the size of an array\n";
    cin>>n;
     int arr[100];

    cout<<"enter the elements \n";
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"enter the key to search\n";
    cin>>key;
    
    bool search = linear(arr,n,key);
    
    if(search){
     cout<<"element present ";
    }
    else{
        cout<<"element absent ";
    }
}

