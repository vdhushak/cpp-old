# include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insertionsort(int arr[],int lenofarr){
    for(int i=0;i<lenofarr;i++){
        if (i+1==lenofarr){
            break;
        }
        int predecssorindex=i+1;
        for(int j=i;j>=0;j--){
            if(arr[j]>arr[predecssorindex]){
                swap(&arr[j],&arr[predecssorindex]);
                predecssorindex=j;
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
    insertionsort(arr,lenofarr);
    for(int i=0;i<lenofarr;i++){
        cout<<arr[i]<<" ";
    }
}    