#include<iostream>
using namespace std;

int power(int base, int exp){              /// created a function becz of cult classic pow() error!! 
    int result = 1;
    for(int i =0; i<exp; i++){
       result= result * base;
    }
    return result;
}
int armstrong(int n){
    
  int original = n;
    int temp = n;
    int sum = 0;
    int count =0;
while(temp>0){                               /// loop for counting digits only -->
    temp = temp/10;
    count++;
}
temp = n;
while(temp>0){                              /// next loop for finding the numbers in them and perform calc -->
 int rem= temp%10;
  temp = temp/10;
  sum = sum + power(rem, count);
}
if(sum==original){
    return 1;
}
else
return 0;
}
int main(){
    int n;
    cout<<"enter the number -> \n";
    cin>>n;

    if(armstrong(n)==1){
        cout<<"yes its a armstrong";
    }
    else{
        cout<<"not a armstrong try again..";
    }
}