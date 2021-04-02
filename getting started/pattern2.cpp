#include<iostream>
using namespace std;
int main(){
    /*
    n=4
    1
    23
    345
    4567*/
    int n,i,j;
    cin>>n;
    i=1;
    while (i<=n){
        j=i;
        int counter=1;
        while (counter<=i){
            cout<<j;
            j++;
            counter++;
        }
        cout<<""<<endl;
        i++;
    }
}