#include<iostream>
using namespace std;
int main(){
   /* num=1234
    2+4=6 odd digit
    1+3=6 even digit  */
    int num,counter,oddsum,evensum;
    cin>>num;
    counter=1;
    oddsum=0;
    evensum=0;
    while(num>0){
        if (counter%2!=0){
            oddsum+=num%10;
        }
        else{
            evensum+=num%10;
        }
    num=num/10;
    counter++  ;  

    }
    cout<<oddsum<<" "<<evensum;
}