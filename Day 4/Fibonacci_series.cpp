#include <iostream>
using namespace std;
int main (){
    int a = 0;
    int b = 1;
    
    cout<<"the fibo series is -> "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    int sum= 0;

for(int i = 1; i<10; i++){
    
      sum = a+b;
      a = b;
      b = sum;

    cout<<sum<<endl;
}
}