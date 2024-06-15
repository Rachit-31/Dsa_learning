// thsi program is used to find the unique no inn an array
#include<iostream>
using namespace std;
int uni(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans =ans^arr[i];
    }
return ans;
}
int main(){
    int arr[5]={1,1,2,3,2};
    int a =uni(arr,5);
    cout<<a;
    return 0;
}
