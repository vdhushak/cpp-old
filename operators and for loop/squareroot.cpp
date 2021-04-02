//squareroot(integral)
//eg. for 18 ans is 4
#include<iostream>
using namespace std;

int main(){
    int n ,i,ans;
    i=1;
    cin>>n;

    for(i;i<=n;i++){
        if (i*i<=n){
            ans=i;
        }
        else{
            break;
        }

    } 
    cout<<ans;
}
