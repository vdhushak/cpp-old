#include<iostream>
using namespace std;
int main(){
    /*n=3
    A
    BB
    CCC */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            char ch='A'-1+i;
            cout<<ch;
            j++;
        }
        cout<<""<<endl;
        i++;
    }

}