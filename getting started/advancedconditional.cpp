#include<iostream>
using namespace std;
int main() {
    int marks;
    cout<<"enter your marks ";
    cin>>marks;
    if (marks<33){
        cout<<"failed ";
    }
    else if (marks>=33 && marks<80){
        cout<<"average";
    }
    else{
        cout<<"ye boii";
    }
}