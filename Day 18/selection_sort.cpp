#include <iostream>
using namespace std;
int main(){
    int n = 5;                                      /// no of elements..
    int arr[] = {5,4,1,3,2};                             /// give ur elements here...

    for(int i = 0; i< n-1; i++){
        int minIndex = i;
        for(int j = i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        } swap(arr[i], arr[minIndex]);
    }
    cout<<"the sorted array is -> \n";
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
}