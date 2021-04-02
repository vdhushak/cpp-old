#include<iostream>
using namespace std;
int linearsearch(int arr[],int lenofarr,int integer){
    int i=0;
    for (i;i<lenofarr;i++){
        if(arr[i]==integer){
            return i;
        }
    }
    return -1;
}
int main(){
    int lenofarr,i,integer;
    cin>>lenofarr;
    int arr[lenofarr];
    i=0;
    for(i;i<lenofarr;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }
    cin>>integer;
    int indexofinteger=linearsearch(arr,lenofarr,integer);
    cout<<indexofinteger;
}