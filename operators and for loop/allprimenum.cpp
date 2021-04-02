// prime=1 || non prime=-1 ---wrong sol--
#include<iostream>
using namespace std;
int primecheck (int n){
    if(n<2){
        return -1;
    } 
    else{
        int i=2;
        for(i;i<n;i++){
            if(n%i==0){
                return -1;
            }
             
        }
        if(i==n){
            return 1;
        } 
    }
}
int main(){
    int n,i;
    cin>>n;
    i=2;
    for(i;i<=n;i++){
        int result=primecheck(i);
        if(result==1){
            cout<<i<<endl;
        }
    } 

}