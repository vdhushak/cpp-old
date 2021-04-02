# include<iostream>
using namespace std;
int main(){
    /* n=4
          1
         12
        123 
       1234        */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int num=1;
        while(j<=n){
            if(j<=n-i){
                cout<<" "; 
            }
            else{
                cout<<num;
                num++;
            }
            j++;
        }

        cout<<""<<endl;
        i++;
    }   
}