#include<iostream>
using namespace std;
int main(){
    /*n=4
       *
      ***
     *****
    ******* */
   int n,i,j;
   cin>>n;
   i=1;
   while (i<=n){
       j=1;
       int counter=1;
       while(j<=n-i+2*i-1){
           if (j<=n-i){
               cout<<" ";
           }
           else {
               cout<<"*";
           }
        counter++;   
        j++;   
       }
        cout<<""<<endl;
        i++;

   } 
}