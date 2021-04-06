#include<iostream>
#include<string>

using namespace std;

void swap(int *a){
    *a+=1;
}
void change(int *p,int lenofarr ){
     for(int i=0;i<lenofarr;i++) {
        *(p+i)=*(p+i)*2;
    }
}
int* func(){
    static int arr2[3]={1,2,3};
    return arr2;
}
int main(){
    string line;
    getline(cin,line);
    cout<<line<<endl;


    int p=5;
    int *c;
    c=&p;
    cout<<*c<<endl;

    int z=1;
    swap(&z);
    cout<<z<<endl;

    int arr[5]={1,2,3,4,5};
    change(&arr[0],5);
    //change(arr,5); same as above
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    //return new arr from fuction
    int*arr3=func();
    for(int i=0;i<3;i++){
        cout<<arr3[i]<<endl;
    }

}

