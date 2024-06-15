// this code is to print RJ
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int s=1,j=1;
        while(s<=n-i){
            cout<<"  ";
            s++;
        }
        while(j<=2*(i-1)+1){
              cout<<"* ";
              j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}