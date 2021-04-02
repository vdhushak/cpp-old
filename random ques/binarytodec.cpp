#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int binarynum,decimalnum,remainder,i;
    cin>>binarynum;
    decimalnum=0;
    i=0;
    while(binarynum>0){
        remainder=binarynum%10 ;
        if(remainder==1){
            decimalnum+=int(pow(2,i));

        }
        binarynum=binarynum/10;

        i++;
    }
    cout<<decimalnum;


}