#include<iostream>
using namespace std;
int linearsearch(int arr[],int lenofarr,int integer){
    int i=0;
    int indexofinteger;
    for(i;i<lenofarr;i++){
        if(arr[i]==integer){
            return i;
        }
    }
    return -1;
}

int main(){
    int cases,i;
    i=1;
    cin>>cases;
    for(i;i<=cases;i++){
        int lenofarr,j;
        cin>>lenofarr;
        j=0;
        int arr[lenofarr];
        for(j;j<lenofarr;j++){
            int num;
            cin>>num;
            arr[j]=num;
        }
        int integer;
        cin>>integer;
        int indexofinteger=linearsearch(arr,lenofarr,integer);
        cout<<indexofinteger<<endl;
    }

}