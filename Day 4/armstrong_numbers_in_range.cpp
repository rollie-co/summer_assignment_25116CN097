#include<iostream>
using namespace std;
int power(int base, int exp){                                   ///created the function ->
    int result = 1;
    for(int i =0; i<exp; i++){
       result= result * base;
    }
    return result;
}
int main (){                                                    /// take range from user ->
    int a,b;
    cout<<"initial number -> \n";
    cin>>a;
    cout<<"final number -> \n";
    cin>>b;
    cout<<endl;
    cout<<" the armstrong numbers are --> "<<endl;
for(int i = a; i<=b ; i++){                                    ///outer loop for our ranges...
  int sum=0;
  int count = 0;
  int temp = i;
  bool isarms=1;

while(temp>0){         /// count digits...
    temp = temp/10;
    count++;
}
temp = i;
while(temp>0){                                                /// taking out digits to perform calcs...
 int rem= temp%10;
  temp = temp/10;
  sum = sum + power(rem, count);
}
if(sum==i){                                                  /// checking conditions ?
  isarms=1;
    cout<<i<<endl;
}
}
}



