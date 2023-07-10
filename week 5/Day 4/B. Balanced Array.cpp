// Problem: B. Balanced Array
// Contest: Codeforces - Codeforces Round 636 (Div. 3)
// URL: https://codeforces.com/contest/1343/problem/B
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
		long long int n;
		cin>>n;
		if((n/2)%2==1)cout<<"NO"<<endl;
		else{
			cout<<"YES\n";
			long long int sum=0,sum1=0;
			for(long long int i=2;i<=n;i+=2){
				cout<<i<<" ";
				sum+=i;
			}
			for(long long int i=1;i<n-1;i+=2){
				cout<<i<<" ";
				sum1+=i;
			}
			cout<<sum-sum1<<endl;
		}
	}
}