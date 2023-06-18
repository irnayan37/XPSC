// Problem: D - XOR World
// Contest: AtCoder - AtCoder Beginner Contest 121
// URL: https://atcoder.jp/contests/abc121/tasks/abc121_d?lang=en
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int x){
	if(x%4==0)return x;
	else if(x%4==1) return x^(x-1);
	else if(x%4==2) return x^(x-1)^(x-2);
	else return x^(x-1)^(x-2)^(x-3);
}
int main(){
	long long int a,b;
	cin>>a>>b;
	long long int ans=fun(a-1)^fun(b);
	
	
	cout<<ans<<endl;
}