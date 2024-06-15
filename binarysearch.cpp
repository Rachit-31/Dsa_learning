#include<iostream>
using namespace std;
int bs(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    int m= s +(e-s)/2;
    while(s<=e){
        if(arr[m]==k){
            return m;
        }
        else if(k>m){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m= s +(e-s)/2;
    }
return -1;
}
int main(){
    int e[6]={2,4,6,8,10,12};
    int c=bs(e,6,2);
    cout<<c;
return 0;
}