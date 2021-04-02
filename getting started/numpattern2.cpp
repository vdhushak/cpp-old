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
    while(i<=n){
        j=1;
        int default_num=i;
        while(j<=n){
            if (j<=n-i){
                cout<<" ";

            }
            else{
                cout<<default_num;
                default_num++; 
            }
           
        j++;
        }
        
    cout<<""<<endl;
    i++; 
       
    }        


}