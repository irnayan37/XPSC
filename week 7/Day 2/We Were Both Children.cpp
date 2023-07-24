// Problem: F. We Were Both Children
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/contest/1850/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
    	int n;
    	cin>>n;
    	int a[n+3];
    	map<int,int>mp;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		mp[a[i]]++;
    	}
    	vector<int>v(n+1,0);
    	for(auto i:mp){
    		for(int j=i.first;j<n+1;j+=i.first){
    			v[j]+=i.second;
    		}
    	}
    	int mx= *max_element(v.first(),v.end());
    	cout<<mx<<endl;
    }
    
    
    
    return 0;
}