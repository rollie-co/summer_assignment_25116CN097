#include <iostream>
using namespace std;
int main (){
    int a = 0;
    int b = 1;
    
    int n;
    cout<<"give the n term to find"<<endl;
    cout<<"the fibo series is -> "<<endl;
    cin>>n;
    
    cout<<a<<endl;
    cout<<b<<endl;
    int sum= 0;

for(int i = 1; i<(n-1); i++){
    
      sum = a+b;
      a = b;
      b = sum;

    cout<<sum<<endl;
}

}