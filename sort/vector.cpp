#include<iostream> 
#include<vector> //vector<int> name;
using namespace std;
int main(){
    vector<int> arr;
    int lenofarr;
    cin>>lenofarr;    
    arr.resize(lenofarr);
    for(int i=0;i<lenofarr;i++){
        cin>>arr[i];
    }
    for(int i=0;i<lenofarr;i++){
        cout<<arr[i]<<" ";
    }



}