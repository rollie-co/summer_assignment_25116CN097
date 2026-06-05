#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter number \n";
    cin>>n;
cout<<endl;
    cout<<"the factors are ->"<<endl;
for(int i = 1; i<=n; i++){
    if(n%i==0){
        cout<<i<<endl;
    }
}


}
