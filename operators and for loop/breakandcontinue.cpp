//you already know about break funtion;
//program to print odd num;
#include<iostream>
using namespace std;
int main(){
    int n,i;
    i=0;
    cin>>n;
    for(i;i<=n;i++){
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<endl;
        }

    }
}