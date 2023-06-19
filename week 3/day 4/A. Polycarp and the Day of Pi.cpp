// Problem: A. Polycarp and the Day of Pi
// Contest: Codeforces - Codeforces Round 847 (Div. 3)
// URL: https://codeforces.com/contest/1790/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace  std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string s1="3141592653589793238462643383279";
		bool ok=false;int ans;
		for(int i=0;i<s.size();i++){
			if(s[i]!=s1[i]){
				ans=i;
				ok=true;
				break;
			}
			
		}
		if(ok==true){
			cout<<ans<<endl;
		}
		else{
			cout<<s.size()<<endl;
		}
		
	}
}