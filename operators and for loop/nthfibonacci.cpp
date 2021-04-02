#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 or n==1){
        return 1;   
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n;
    cin>>n;
    if(n>=1){
        int nth_term=fibonacci(n-1);
        cout<<nth_term;
    }

}