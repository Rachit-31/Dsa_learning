#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    bool isluck=0;
	    while(x!=0){
	        int a=x%10;
	        if(a==7){
	            isluck =1;
	            break;
	        }
	        x=x/10;
	    }
	    if(isluck==0){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
