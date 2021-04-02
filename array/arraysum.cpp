#include<iostream>
using namespace std;
int arr_sum(int arr[],int lenofarr){
    int sum=0;
    int i=0;
    for(i;i<lenofarr;i++){
        sum+=arr[i];
    }
    return sum;

}
int main (){
    int lenofarr,i,num;
    cin>>lenofarr;
    int arr[lenofarr];
    i=0;
    for(i;i<lenofarr;i++){
        cin>>num;
        arr[i]=num;
    }
    int ans=arr_sum(arr,lenofarr);
    cout<<ans;

}