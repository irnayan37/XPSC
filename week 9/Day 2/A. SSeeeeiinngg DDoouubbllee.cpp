// Problem: A. SSeeeeiinngg DDoouubbllee
// Contest: Codeforces - Codeforces Round 836 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1758/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
typedef    long long             ll;
typedef    unsigned long long    ull;
typedef    vector<int>           vi;
typedef    vector<ll>            vl;

#define    sz(x)       (int)x.size()
#define    ff          first
#define    ss          second
#define    pb          push_back

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	int l=s.size();
    	map<char,int>mp;
    	for(int i=0;i<l;i++)mp[s[i]]+=2;
    	string L="",R="";
    	for(char c='a';c<='z';c++){
    		if(mp[c]==0)continue;
    		for(int i=1;i<=mp[c]/2;i++){
    			L.push_back(c);
    		}
    		for(int i=1;i<=mp[c]/2;i++){
    			R.push_back(c);
    		}
    	}
    	reverse(R.begin(),R.end());
    	cout<<L<<R<<endl;
    	
    	
    }
    
    
    
    return 0;
}