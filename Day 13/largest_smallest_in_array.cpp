#include<iostream>
#include<climits>
using namespace std;
int getMIN(int arr[], int n){
   int min = INT_MAX;

for(int i = 0 ;i<n ;i++){
    if(arr[i]<min){
        min = arr[i];
    }
}
return min;
}
int getMAX(int arr[], int n){
   int max = INT_MIN;

for(int i = 0 ;i<n ;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
return max;
}
int main(){
    int n ;
    cout<<"enter the size of array\n";
    cin>>n;

    int arr[100];
    cout<<"enter the elements of array\n";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"the smallest element is -> "<<getMIN(arr,n);

     cout<<endl;
    cout<<"the largest element is -> "<<getMAX(arr,n);

}