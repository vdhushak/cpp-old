#include<iostream>
using namespace std;
int main(){
    /*n=4
    ABCD
    ABCD
    ABCD
    ABCD
    char ch ='A'+17; */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            char ch='A'-1+j;
            cout<<ch;
            j++;
            }
        cout<<""<<endl;
        i++;

    }


}