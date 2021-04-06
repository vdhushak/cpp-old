# include<iostream>
using namespace std;
int minindexofarr(int arr[],int lenofarr,int start,int end){
    int minindex=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    return minindex;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionsort(int arr[],int lenofarr){
    for(int i=0;i<lenofarr;i++){
        int minindex=minindexofarr(arr,lenofarr,i,lenofarr-1);
        swap(&arr[i],&arr[minindex]);
    }    
}
int main(){
    int lenofarr;
    cin>>lenofarr;
    int arr[lenofarr];
    for(int i=0;i<lenofarr;i++){
        cin>>arr[i];
    }
    selectionsort(arr,lenofarr);
    for(int i=0;i<lenofarr;i++){
        cout<<arr[i]<<" ";
    }
}        

