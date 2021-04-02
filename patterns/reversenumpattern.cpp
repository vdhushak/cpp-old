#include<iostream>
using namespace std;
int main(){
    /* n=4
    1
    21
    321
    4321 */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int num=i;
        while(j<=i){
            cout<<num;
            num--;
            j++;

        }
        i++;
        cout<<""<<endl;

    }

}