#include<iostream>
using namespace std;
int populatedarr(int lenofarr){
    int i,num;
    static int arr[lenofarr];
    i=0;
    for(i;i<lenofarr;i++){
        cin>>num;
        arr[i]=num;

    }
    return arr;


}

int main (){
    /* given empty arr and len(aarr)
    populate arr in 1,3,......4,2. order
    input
    1
    6
    output:
    1 3 5 6 4 2  */
    int cases,i;
    cin>>cases;
    i=0;
    for (i;i<=cases;i++){
        int lenofarr;
        cin>>lenofarr;
        populatedarr(lenofarr);
        int j=0;
        for(j;j<lenofarr;j++){
            cout<<arr[j]<<endl;
        }
 
    }
}