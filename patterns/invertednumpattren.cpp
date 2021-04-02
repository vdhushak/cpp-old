# include<iostream>
using namespace std;
int main(){
    /*n=4
    4444
    333
    22
    1 */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=j){
        j=1;
        while(j<=n){
            if(j<=n-i+1){
                cout<<n-i+1;

            }
            j++;
            
        }
        cout<<""<<endl;
        i++;
    }
}