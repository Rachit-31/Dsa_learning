#include <iostream>

using namespace std;

int main(){
	// i/p 123 so o/p is 321
	/*int n;
	cin>>n;
	while (n!=0)
	{
		int digit =n%10;
		n=n/10;
		int ans=0;
		
        ans=(ans*10)+digit;
		cout<<ans;
	}*/
	// CODE FOR PRINTING ODD NUMBERS
    /*int a,b,c;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		c=0;
                for(int j=2;j<i;j++){
					if(i%j==0){
                        c++;
					}
					
				}
				if(c==0){
					cout<<i<<endl;
				}
	}*/
	// method 2
	// int a,b;
	
	// cin>>a>>b;
	// for(int i=a;i<=b;i++){
	// 	int p=1;
	// 	for(int j=2;j<i;j++){
    //         if(i%j==0){
	// 			p = p*0;
	// 		}
	// 		else{
	// 			p=p *1;
	// 		}
	// 	}

	// 	if (p==1){
	// 		cout << i<<endl;
	// 	}

	// }
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int p=(a*5)+(b*7);
	    cout<<p;
	}
	return 0;
}
