#include<iostream>
using namespace std;
int reverse(int n , int ans =0 ){
    /// base case....
    if(n==0){
        return ans;
    }
     int digit = n% 10;
     ans = (ans * 10) + digit;
    
     return reverse(n/10,ans);
     
} 
int main(){
    int n ;
    cout<<"enter the digits to find reverse"<<endl;
    cin>>n;

    cout<<reverse(n)<<endl;
}