#include<iostream>
#include<climits>
using namespace std;
int secondlargest(int arr[], int n){
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]!= first){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int arr[] = {5,1,7,4,3,2};
    int n = 6;
    cout<<"the second largest element is -> \n"<<secondlargest(arr,n);

}