#include<iostream>
using namespace std;
int power(int x, int n){
    int result = 1;

if(n==0){
    return 1;
}

for(int i = 0; i<n; i++){
    result = result * x;
}
  return result;
}
int main(){
    int x,n;

    cout<<"      finding the x^n     \n";
    cout<<"give the base value (x) ->\n";
    cin>>x;
    cout<<"give the power of "<<x<<endl;
    cin>>n;

int ans;
    ans = power(x,n);

    cout<<"answer = "<<ans<<endl;
}