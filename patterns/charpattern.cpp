#include<iostream>
using namespace std;
int main(){
    /*n=4
    A
    BC
    CDE
    DEFG */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=0;
        while(j<i){
            char ch ='A'-1+i+j;
            cout<<ch;
            j++;
        }
        cout<<""<<endl;
        i++;
    }
}