#include<iostream> 
#include<vector> //vector<int> name;
using namespace std;
int main(){
    vector<int> arr;
    int lenofarr;
    cin>>lenofarr;    
    for(int i=0;i<lenofarr;i++){
        int num;
        cin>>num;
        arr.push_back(num);//append
        //arr.pop_back()  ==pop
        //arr.back()    ==arr[-1]
        //arr.size()
    }
    for(int i=0;i<lenofarr;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;
    cout<<arr.size()<<endl;



}