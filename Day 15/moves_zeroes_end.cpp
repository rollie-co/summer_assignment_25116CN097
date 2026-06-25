#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {0,2,0,6,8};

    for(int i =0; i<n; i++){

        for(int j =0; j<n-i; j++){
            if(arr[j]==0){
                swap(arr[j],arr[n-i-1]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}