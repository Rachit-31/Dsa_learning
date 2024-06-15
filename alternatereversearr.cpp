// in this we will interchange the alternate positon in array
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void alt(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[4]={1,2,3,4};
    int odd[5]={1,2,3,4,5};
    alt(even,4);
    print(even,4);
    cout<<endl;
    alt(odd,5);
    print(odd,5);
    return 0;
}
