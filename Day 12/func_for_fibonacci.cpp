#include <iostream>
using namespace std;
int fibonacci(int n){
    int a = 0;
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    int sum= 0;

for(int i = 1; i<(n-1); i++){
    
      sum = a+b;
      a = b;
      b = sum;
cout<< sum<<endl;
}
return sum;

}
int main (){
    int n;
    cout<<"give the n term to find"<<endl;
    cout<<"the fibo series is -> "<<endl;
    cin>>n;
    
    cout<<fibonacci(n)<<endl;
}

