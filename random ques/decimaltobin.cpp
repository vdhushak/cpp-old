#include<iostream>
#include<math.h>
using namespace std;
int main(){
    const int MAX=100;
    int binarynum,decimalnum,remainder,i;
    cin>>decimalnum;
    binarynum=0;
    i=0;
    int arr[MAX];
    while (decimalnum>0)
    {
        remainder=decimalnum%2;
        if(remainder==1){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
        decimalnum=decimalnum/2;
        i++;
    }
    i=i-1;
    for (i;i>=0;i--){
        cout<<arr[i];
    }
    


}