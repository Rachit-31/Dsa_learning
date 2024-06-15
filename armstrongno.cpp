#include<iostream>
using namespace std;
int main(){
    int i=0;
    int a,b,c,k;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        c=i;
        int r=0;

        while(c!=0){
            k=c%10;
            r=r+(k*k*k);
            c=c/10;
        }
        /* cout << r << " "<< c << endl; */
        if(r==i){
            cout<<i << endl;
        }
    }
    return 0;
}