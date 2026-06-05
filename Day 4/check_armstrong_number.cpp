#include<iostream>
using namespace std;

int power(int base, int exp){              /// created a function becz of cult classic pow() error!! 
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
<<<<<<< Updated upstream
if(sum==original){                            /// checking the conditions ??
    cout<<"yeaaa it's armstrong number!!!"<<endl;
=======
if(sum==original){
    cout<<"yeaaa it's armstrong number !!!"<<endl;
>>>>>>> Stashed changes
}
else
cout<<"nahh try again "<<endl;

}



