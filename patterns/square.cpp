#include<iostream>
using namespace std;
int main(){
    /* n=4
    4444
    4444
    4444
    4444  */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n;
            j++;
        }
        cout<<""<<endl;
        i++;
    }

}