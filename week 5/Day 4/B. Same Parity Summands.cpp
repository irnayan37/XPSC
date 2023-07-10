// Problem: B. Same Parity Summands
// Contest: Codeforces - Codeforces Round 640 (Div. 4)
// URL: https://codeforces.com/contest/1352/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		
		if(k>n){
			cout<<"NO\n";
			
		}
		else if(k==1){
			cout<<"YES\n";
			cout<<n<<endl;
		}
		
			
		
		else if(n%2==0){
				if(k*2<=n){
					cout<<"YES\n";
					for(int i=0;i<k-1;i++){
						cout<<2<<" ";
					}
					cout<<(n-2*(k-1));
					cout<<endl;
				}
				
				else if(k%2==0){
					
						cout<<"YES\n";
						for(int i=0;i<k-1;i++){
							cout<<1<<" ";
						}
						cout<<(n-(k-1));
						cout<<endl;
						
					
				}
				else{
					cout<<"NO\n";
					
					
				}
			}
			else if(n%2!=0){
				if(k%2==1){
					cout<<"YES\n";
					for(int i=1;i<k;i++){
						cout<<1<<" ";
					}
					cout<<(n-(k-1));
					cout<<endl;
				}
				else{
					cout<<"NO\n";
					
					
				}
			}
		}
		
		
	
}