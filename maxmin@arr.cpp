#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getmin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
}
int getmax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
}
int main(){
    int size;
    int num[10];
    for(int i=0;i<size;i++){
        cin>> num[i];
    }
    cout<<getmax(num,size);
    return 0;
}