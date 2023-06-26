// Problem: A. Round Down the Price
// Contest: Codeforces - Codeforces Round 805 (Div. 3)
// URL: https://codeforces.com/contest/1702/problem/A
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
		
			int n;
			cin>>n;
			long long int p=1;
			while(p*10<=n){
				p*=10;
			}
		
		cout<<n-p<<endl;
		
	}
}