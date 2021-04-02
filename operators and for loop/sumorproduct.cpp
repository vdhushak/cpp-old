#include<iostream>
using namespace std;
int main(){
    int n,choice;
    cin>>n>>choice;
    if(choice==1){
        cout<<(n*(n+1))/2;

    }
    else if(choice==2){
        int product=1;
        for (int i=1;i<=n;i++){
            product=product*i;
        }
        cout<<product;

    }
    else{
        cout<<-1;

    }
}