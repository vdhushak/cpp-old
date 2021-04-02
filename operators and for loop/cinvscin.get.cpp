#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int count=0;
    while(c!='$'){
        cin>>c;
        count++;
    }
    cout<<count;
}
/*
input:
vsj s$
output:
4
becuse cin ignore spaces and new lines

*/