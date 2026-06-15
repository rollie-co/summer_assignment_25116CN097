#include<iostream>
using namespace std;
int sum(int a, int b){
 int ans = (a+b);
 return ans;
}
int main(){
    int a,b;
    cout<<"enter the two number jiksa sum chahiy"<<endl;
    cin>>a>>b;

    cout<<"the sum is -> "<<sum(a,b)<<endl;
}