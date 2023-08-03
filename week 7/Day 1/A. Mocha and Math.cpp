// Problem: A. Mocha and Math
// Contest: Codeforces - Codeforces Round 738 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1559/A
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
    	int n;
    	cin>>n;
    	int a[n+3];
    	for( int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int ans=a[0];
    	for(int i=1;i<n;i++){
    		ans= ans & a[i];
    	}
    	cout<<ans<<endl;
    }
    
    
    
    return 0;
}