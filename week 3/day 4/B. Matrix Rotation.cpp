// Problem: B. Matrix Rotation
// Contest: Codeforces - Codeforces Round 839 (Div. 3)
// URL: https://codeforces.com/contest/1772/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(((a<b && c<d)&&(a<c && b<d))||((a>c && b>d)&&(d>c && b>a))||
		((c>d && a>b)&&(b>d && a>c))||((d>b && c>a)&&(a>b && c>d))){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}