#include<iostream>
using namespace std;
int main(){
    /*n=4
    1
    22
    333
    4444 */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        i++;
        cout<<""<<endl;

    }
}