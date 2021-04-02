#include<iostream>
using namespace std;
int main (){
    int lenofarr;
    cin>>lenofarr;
    int arr[lenofarr];
    int num,i;// char c[5]  or double d[5]

    i=0;
    for(i;i<lenofarr;i++){
        cin>>num;
        arr[i]=num;

    }
    cout<<""<<endl;
    i=0;
    for(i;i<lenofarr;i++){
        cout<<arr[i]<<" ";
    }

}