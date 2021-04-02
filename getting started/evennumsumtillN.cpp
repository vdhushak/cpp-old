#include<iostream>
using namespace std;
int main(){
    int num,sum;
    cin>>num;
    int i=2;
    sum=0;
    while (i<=num){
        if (i%2==0){
            sum+=i;

        }
    i++;
    }
    cout<<sum;
}