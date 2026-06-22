#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
int mid = start+(end-start)/2;
    
    while(start<=mid){
        if(arr[mid]==key){
            return mid;
        }
        if(key>mid){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
int main(){

    int arr[]= {0 ,2,3,5,6};                                              //// enter your elements here 
    int n = 4;
    int index = binarysearch(arr,n,3);
    cout<<"element 5 present at index "<<index<<endl;
}