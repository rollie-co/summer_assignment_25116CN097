#include <iostream>
using namespace std;

void reverse(int arr[], int n ){
  int start = 0;
  int end = n-1;
 while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int n;
    cout<<"enter the size of an array\n";
    cin>>n;
     int arr[100];

    cout<<"enter the elements \n";
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"the reverse is -> \n";
    reverse(arr,n);
    printarray(arr,n);
}