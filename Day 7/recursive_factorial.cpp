#include<iostream>
using namespace std;

int factorial(int n ){
    
    if(n==0){                         //base case
        return 1;
    }
 int small = factorial(n-1);
 int big = n * small;
    return big;
}
int main(){
    int n ;
    cout<<"enter the number -> "<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<"the factorial is = "<<ans<<endl;
}