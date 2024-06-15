// to calculate the 1st and last index of the given number using binary search
#include<iostream>
using namespace std;
int first(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    int m= s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==k){
            ans=m;
            e =m-1;
        }
        else if(k>m){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m= s +(e-s)/2;
    }
return ans;
}
int lastO(int arr[],int n, int k){
    int s=0;
    int e=n-1;
    int m= s +(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==k){
            ans=m;
            s =m+1;
        }
        else if(k>m){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m= s +(e-s)/2;
    }
return ans;
}
int main(){
    int e[6]={2,4,6,8,10,12};
return 0;
}