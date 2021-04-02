#include<iostream>
using namespace std;
int main(){
    int n,reversednum;
    cin>>n;
    reversednum=0;
    while(n>0){
        reversednum=10*reversednum+n%10;
        n=n/10;

    }
    cout<<reversednum;

}