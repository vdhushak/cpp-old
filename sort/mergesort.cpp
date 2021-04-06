# include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void merge(int arr1[],int arr2[],int lenarr1,int lenarr2){
    int i,j,k;
    i=j=k=0;
    int mergedarr[lenarr1+lenarr2];
    while(i<lenarr1 and j<lenarr2){
        if (arr1[i]<arr2[j]){
            mergedarr[k]=arr1[i];
            i++;
            k++;

        }
        else{
            mergedarr[k]=arr2[j];
            j++;
            k++;

        }

    }
    if(j<i){
        while(i<lenarr1){
            mergedarr[k]=arr1[i];
            i++;
            k++;

        }
    }
    else{
            while(j<lenarr2){
            mergedarr[k]=arr2[j];
            j++;
            k++;

        }

    }
    for(int i=0;i<lenarr1+lenarr2;i++){
        cout<<mergedarr[i]<<" ";
    }
}
int main(){ 
    merge({1,2,3,4,5},{6,7,8,9,10},5,5);
}