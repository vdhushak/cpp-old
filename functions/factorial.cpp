#include<iostream>
using namespace std;
int factorial(int n){
    int i=2;
    unsigned long long fact=1;
    for (i;i<=n;i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    int cases,i;
    cin>>cases;
    i=1;
    for (i;i<=cases;i++){
        int num;
        cin>>num;
        unsigned long long ans=factorial(num);
        cout<<ans<<endl;
    }

}