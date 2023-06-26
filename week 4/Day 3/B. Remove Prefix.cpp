// Problem: B. Remove Prefix
// Contest: Codeforces - Codeforces Round 811 (Div. 3)
// URL: https://codeforces.com/contest/1714/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
		vector<long long int>a(n);
		map<int,int>mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long int c=0;
		for(int i=n-1;i>=0;i--){
			if(mp[a[i]]==0){
				c++;
			}
			else{
				break;
			}
			mp[a[i]]++;
		}
		cout<<n-c<<endl;
		
		
	}
}