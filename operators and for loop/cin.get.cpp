#include<iostream>
using namespace std;
int main(){
    char c;
    cin.get(c);
  //cin.get(c2) in case to register multiple inputs  
    int count=0;
    while(c!='$'){
        cin.get(c);
        count++;
    }
    cout<<count;
}
/*
cin.get() dont ignores spaces
input:
vsj s$
output:
5 
*/