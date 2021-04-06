#include<iostream>
using namespace std;
int pwr(int base,int degree){
    int i=1;
    unsigned long long ans=1;;
    if(degree==0){
        return ans;
    }
    if(degree>0){
        for(;i<=degree;i++){
            ans=ans*base;
        }
    }
    else{
        for(;i<=degree;i++){
            ans=ans/base;
        }
    }    
    return ans;

}
int main(){
    int base,power;
    cin>>base>>power;
    cout<<pwr(base,power);
}