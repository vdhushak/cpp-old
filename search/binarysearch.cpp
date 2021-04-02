#include<iostream>
using namespace std;
int binarysearch(int arr[],int start,int end,int integer){
    if(start==end){
        if(arr[start]==integer){
            return start;
        }
        else{
            return -1;
        }
    }
    else{
        int mid=int((start+end)/2);
        if(arr[mid]==integer){
            return mid;
        }
        else if(arr[mid]>integer){
            int index=binarysearch(arr,start,mid-1,integer);
            return index;
        }
        else{
            int index=binarysearch(arr,mid+1,end,integer);
            return index;
        }
        
    }

}

int main(){
    int i,lenofarr,integer,num;
    i=0;
    cin>>lenofarr;
    int arr[lenofarr];
    for(i;i<lenofarr;i++){
        cin>>num;
        arr[i]=num;
    }
    cin>>integer;
    int ans=binarysearch(arr,0,lenofarr-1,integer);
    cout<<ans;
}