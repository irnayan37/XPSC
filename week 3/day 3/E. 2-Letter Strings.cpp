// Problem: E. 2-Letter Strings
// Contest: Codeforces - Codeforces Round 784 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1669/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int  t;
	cin>>t;
	while(t--){
		int  n;
		cin>>n;
		map<char,ll>first;
		map<char,ll>second;
		map<string,ll>occur;
		
		vector<string>v(n);
		for(ll i=0;i<n;i++){
			cin>>v[i];
			first[v[i][0]]++;
			second[v[i][1]]++;
			occur[v[i]]++;
		}
		ll  res=0,ans;
		for(ll i=0;i<n;i++){
			ans=max((ll)0,first[v[i][0]]-occur[v[i]]);
			res+=ans;
			ans=max((ll)0,second[v[i][1]]-occur[v[i]]);
			res+=ans;
			if(first[v[i][0]]>0)first[v[i][0]]--;
			if(second[v[i][1]]>0)second[v[i][1]]--;
			if(occur[v[i]]>0)occur[v[i]]--;
		}
		cout<<res<<endl;
		
		
		
		

	}
}