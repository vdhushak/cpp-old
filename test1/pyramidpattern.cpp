#include<iostream>
#include<math.h>
using namespace std;
void reverse(int n,int y){
    while(n<=y){
        cout<<n;
        n++;
    }
}

int main(){
    int n,i,j;
    cin>>n;
    i=1;
    for(i;i<=n;i++){
        j=1;
        int num=i;
        for(j;j<=n-i+2*i-1;j++){
            if(j<=n-i+int((2*i-1)/2)+1){
                if(j<=n-i){
                    cout<<" ";
                }
                else{
                    cout<<num;
                    num--;

                }
            }
            else{
                j=n-i+2*i-1;
                num=num+2;
                reverse(num,i);
            }
        }
        cout<<""<<endl;

    }
    
}