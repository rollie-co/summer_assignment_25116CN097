#include<iostream>
using namespace std;

int power(int base, int exp){
    int result = 1;
    for(int i =0; i<exp; i++){
       result= result * base;
    }
    return result;
}
int main (){
    int n,count=0;
    cout<<"enter the number to "<<endl;
    cin>>n;

    int original = n;
    int temp = n;
    int sum = 0;

while(temp>0){
    temp = temp/10;
    count++;
}
temp = n;
while(temp>0){
 int rem= temp%10;
  temp = temp/10;
  sum = sum + power(rem, count);
}
if(sum==original){
    cout<<"yeaaa it's a prime !!!"<<endl;
}
else
cout<<"nahh try again "<<endl;

}



