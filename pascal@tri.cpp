#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<n-i+1){
            cout<<"&";
            space++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}