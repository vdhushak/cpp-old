/* if we dont write i++ before continue then program will become infinite loop after printing 6;  
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        if(i==7){
            continue;
        }
        cout<<i<<endl;
        i++;
    }
}
*/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        if(i==7){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
}