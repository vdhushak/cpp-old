#include<iostream>
using namespace std;
int* bubblesort(int arr[],int lenofarr
){
    int i=0;
    for(i;i<lenofarr
;i++){
        for(int j=0;j<lenofarr
-i;j++){
            if(j+1==lenofarr
){
                break;
            }
            else{
                if(arr[j+i]>arr[j]){
                    int num=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=num;
                }
            }

        }
    }
    return arr;
}
int main(){
    int i,lenofarr,num;
    cin>>lenofarr;
    i=0;
    int arr[lenofarr];
    for (i;i<lenofarr;i++){
        cin>>num;
        arr[i]=num;
    }
    int *p;
    p=bubblesort(arr,lenofarr);
    i=0;
    for(i;i<lenofarr;i++){
        cout<<*(p+i)<<" ";
    }
}