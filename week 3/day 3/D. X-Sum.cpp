// Problem: D. X-Sum
// Contest: Codeforces - Codeforces Round 790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int a[220][220];
int fun(int i,int j,int n,int m){
	int sum=0;
				int index=0;
				while(i-index>-1 and j-index>-1){
					sum+=a[i-index][j-index];
					index++;
				}
				index=0;
				while(i+index<n and j+index<m){
					sum+=a[i+index][j+index];
					index++;
				}
				index=0;
				while(i-index>-1 and j+index<m){
					sum+=a[i-index][j+index];
					index++;
				}
				index=0;
				while(i+index<n and j-index>-1){
					sum+=a[i+index][j-index];
					index++;
				}
				return sum-3*(a[i][j]);
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
			
		}
		int ans=0;
		for(int i=0;i<n;i++){
			 
			for(int j=0;j<m;j++){
				 ans=max(ans,fun(i,j,n,m));
				
			}
			
			
		}
		cout<<ans<<endl;
		
		
	}
}