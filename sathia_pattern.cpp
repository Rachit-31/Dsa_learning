// this loop is valid only for n=4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=(n*2+1);i++){
        // cout<<i;
        if(i==1 || i>n){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
   cout<<endl;
    for(int r=1;r<n*2+1;r++){
        if(r==1||r==5){
            cout<<"* ";             // for 2nd star from the top
        }
        else{
            cout<<"  ";
        }
    }

     cout<<endl;
    for(int s=1;s<n*2+1;s++){
        if(s==1||s==5){
            cout<<"* ";         //for 3rd star form the top
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
    for(int k=1;k<=n*2+1;k++){       //for 4th row consiting of 9 stars
        cout<<"* ";
    }
    cout<<endl;
    for(int h=1;h<=2;h++){
        for(int c=1;c<=(n*2+1);c++){
            if(c==5||c==9){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
 
    for(int g=1;g<(n*2+1);g++){
        if(g==9||g<=5){
            cout<<"* ";                              //loop for 3rd and 2nd last    
        }
        else{
            cout<<"  ";
        }
    }
    return 0;
}