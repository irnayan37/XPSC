// Problem: A. Candies and Two Sisters
// Contest: Codeforces - Codeforces Round 634 (Div. 3)
// URL: https://codeforces.com/contest/1335/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n;
		
		a=(n/2)+1;
		b=1;
		int c=0;
		for(int i=a;i<=n/2;i++){
			if(i>b){
				c++;
				if(i+b==n){
					break;
				}
			}
		}
		cout<<c<<endl;
		
		
	}
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		//long long int ans=(n-1)/2;
		//cout<<ans<<endl;
		if(n<=2){
			cout<<"0"<<endl;
		}
		else if(n%2==0){
			cout<<n/2-1<<endl;
		}
		else{
			cout<<n/2<<endl;
		}
		
		
		
		
		
		
	}
}