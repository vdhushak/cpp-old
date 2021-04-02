# include<iostream>
using namespace std;
void reverse(int num,int counter,int i){
    while(counter<=2*i-1){
        cout<<num;
        counter++;
        num--;
    }

}
int main(){
    /*n=4
       1
      232
     34543
    4567654 */
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int num=i;
        int counter=1;
        while (j<=n-i+2*i-1){
            if (j<=n-i){
                cout<<" ";
            }
            else if(counter<=(2*i)/2){
                cout<<num;
                num++;
                counter++;
                }
            else{
                num=num-2;
                reverse(num,counter,i);
                break;
            }    
            j++;
        }

        cout<<""<<endl;
        i++;
    }

}