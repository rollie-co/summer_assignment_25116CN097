#include <iostream>
using namespace std;
void duplicate(int arr[], int n){
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(arr[i] == arr[j]){
            cout << arr[i]<<endl;
        }
    }
}
}                                               /// brute force approach....
int main(){
     int n;
    cout<<"enter the size of an array\n";
    cin>>n;
     int arr[100];

    cout<<"enter the elements \n";
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"the duplicates in array are -> \n";
    duplicate(arr,n);

}