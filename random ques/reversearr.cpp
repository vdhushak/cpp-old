#include<iostream>
using namespace std;
int* reverseofarr(int arr[],int lenofarr){
    const int MAX=100;
    static int reversedarr[MAX];
    lenofarr--;
    int i=0;
    for(lenofarr;lenofarr>=0;lenofarr--){
        reversedarr[i]=arr[lenofarr];
        i++;
    }
    return reversedarr;

}
int main(){
    int i,lenofarr;
    cin>>lenofarr;
    int arr[lenofarr];
    i=0;
    for(i;i<lenofarr;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }
    int *p;
    p=reverseofarr(arr,lenofarr);
    for(int i=0;i<lenofarr;i++){
        cout<<*(p+i)<<" ";
    }
}   
