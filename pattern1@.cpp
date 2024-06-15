#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1,t=1;
    while(i<=n){
        int j=1;
        t=i;
        while(j<=i){                 //this is incompleter pattern
            cout<<t;
            t++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
