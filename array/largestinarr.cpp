#include<iostream>
using namespace std;
int main (){
    int lenofarr,i,num,max;
    cin>>lenofarr;
    i=0;
    int arr[lenofarr];
    for(i;i<lenofarr;i++){
        cin>>num;
        arr[i]=num;
    }
    max=arr[0];
    i=1;
    for(i;i<lenofarr;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;

}
