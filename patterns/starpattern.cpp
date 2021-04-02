# include<iostream>
using namespace std;
int main(){
    /*n=3
      *
     ***
    ***** */
   int n,i,j;
   cin>> n;
   i=1;
   while(i<=n){
       j=1;
       while(j<=n-i+2*i-1){
           if(j<=n-i){
               cout<<" ";
           }
           else{
               cout<<"*";
           }
           j++;
       }
       cout<<""<<endl;
       i++;
   }


}