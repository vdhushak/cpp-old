//   & and | or ~ not 
//   1 xor 1 =0   
//   1 xor 0 =1
/*
15<<1 15*2
15>>1 15/2 */
#include<iostream>
using namespace std;
int main(){
    int ror, rand,rnot,rxor,rls,rrs;
    ror=15|30;
    rand=15&30;
    rnot=~15;
    rxor=15^30;
    rls=15<<2;
    rrs=15>>2;
    cout<<ror<<endl;
    cout<<rand<<endl;
    cout<<rnot<<endl;
    cout<<rxor<<endl;
    cout<<rls<<endl;
    cout<<rrs;
}