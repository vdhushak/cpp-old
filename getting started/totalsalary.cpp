#include<iostream>
#include<math.h>
using namespace std;
int main(){
    /* totalsalary=basic +hraa=da+allow-pf
    hra=20%basic
    da=50%basic
    
    allow=1700 if grade A
    allow=1500 if grade B
    allow=1300 if grade c or any other
    pf=11%basic
    */
   int hra,da,allow,pf,basic,totalsalary; 
   char grade;
   cin>>basic;
   cin>>grade;
   hra=(20*basic)/100;
   da=(50*basic)/100;
   pf=(11*basic)/100;
   if (grade=='A'){
       allow=1700;

   }
   else if(grade=='B'){
       allow=1500;

   }
   else{
       allow=1300;

   }
   totalsalary=ceil(basic)+ceil(hra)+ceil(da)+ceil(allow)-ceil(pf);
   cout<<totalsalary<<endl;



}