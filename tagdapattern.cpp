#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        j=1;
        while(j<=(i-1)*2){
            cout<<"* ";
            j++;
        }
        j=5-i+1;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        i++;                                   //this is how i made a difficult pattern 
        cout<<endl;
    }
    cout<<"this is only begining";
    return 0;
}