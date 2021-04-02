#include<iostream>
using namespace std;
int main(){
    /*check prime or not*/
    int num;
    cin>>num;
    int i=2;
    while(i<num){
        if (num%i==0){
            cout<<"not prime";
            break;
        }
    i++;
    }
    if (i==num ){
        cout<<"prime";
    }
    else if (num<2){
        cout<<"not prime";
    }




}