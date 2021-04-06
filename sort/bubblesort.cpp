# include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int arr[],int lenofarr){
    int i=0;
    for(;i<lenofarr;i++){
        for(int j=0;j<lenofarr-i;j++){
            if(j+1==lenofarr){
                break;
            }
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int lenofarr;
    cin>>lenofarr;
    int arr[lenofarr];
    for(int i=0;i<lenofarr;i++){
        cin>>arr[i];
    }
    bubblesort(arr,lenofarr);
    for(int i=0;i<lenofarr;i++){
        cout<<arr[i]<<" ";
    }
}        

