#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n){
   for(int i=0;i<=n;i++){
      cout<<arr[i]<<" ";
   }
}
int main(){
   /*int arr[10]={10,12,1};
   cout<<arr[0]<<endl;
   for(int i=3;i<10;i++){
      arr[i]=23;
      cout<<arr[i]<<endl;
   }*/
   int arr[4]={1,2,3,5};
   printarray(arr,3);
   return 0;
}