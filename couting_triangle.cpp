//   1
//  23
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
       
        while(j<=i){
              cout<<"*"<<" ";
              j++;           
        }
        cout<<endl;
        i++;
    }
    int a=1;
    while(a<=n){
        int b=1;
        while(b<=n-a+1){
            cout<<"*"<<" ";
            b++;
        }
        cout<<endl;
        a++;
    }
    return 0;
}