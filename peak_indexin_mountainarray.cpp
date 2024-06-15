#include<iostream>
using namespace std;
int p(int arr[],int n){
    int s=0 , e=n-1;
    int m= s + (e-s)/2;
    while(s<e){
        if(arr[m]> arr[m+1] && arr[m]>arr[m-1]){
            return arr[m];
        }
        else if(arr[m]< arr[m+1]){
            s=m+1;
        }
        else if(arr[m] < arr[m-1]){
            e = m-1;
        }
        m= s + (e-s)/2;
    }
    return -1;
}
int main(){
    int a[4]={3,4,5,1};
    int c=p(a,4);
    cout<<c;
    return 0;
}