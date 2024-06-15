#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int a=4;
    // int b=6;
    // cout<<"a&b"<<(a&b)<<" "<<endl;
    // cout<<"a|b"<<(a|b)<<endl;
    // cout<<"a"<<(~a)<<endl;
    // cout<<"a^b"<<(a^b)<<endl;
    // cout<<(18>>1)<<endl;
    // cout<<(21<<2)<<endl;
    // cout<<"next topic"<<endl;
    // int i=8;
    // cout<<(i++)<<endl;
    // // 8  9
    // // 10
    // cout<<(++i)<<endl;
    // cout<<(i--)<<endl;
    // cout<<(--i)<<endl;
    // // for loop
    //   int n;
    //   cin>>n;
     
    //  int c;
    //  cin>>c;
    //  int sum=0;
    //  for(int i=1;i<=n;i++){
    //   sum=sum+i;
    //   cout<<sum;
    //  }
   
   // WRITE THE FUNCTION THAT TAKES RANDOM INTEGER AND RETURNS THE NUMBER '1' AS A BIT,
//   int n;
//    cin>>n;
//    int count=0;
//    while(n!=0){
//      if (n&1)
//      {
//          /* code */ count++;
//      }
//      n=n>>1;
//    }
//    cout<<count;

// to find the binary number
int n;
cin>>n;
int ans=0;
int i=0;
while(n!=0){
     int bit=n&1;
     ans=(bit* pow(10,i)) + ans;
     n=n>>1;
     i++;
}
cout<<ans;
     return 0;
}