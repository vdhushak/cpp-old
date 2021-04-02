#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    i=2;
    if(n<i){
        cout<<"not prime";
    }
    else{
        for(i;i<n;i++){
            if(n%i==0){
                cout<<"not prime";
                break;
            }

        }
        if(i==n){
            cout<<"prime";
        } 
    }
}