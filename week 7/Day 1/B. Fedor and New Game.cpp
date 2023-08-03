// Problem: B. Fedor and New Game
// Contest: Codeforces - Codeforces Round 267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/467/B
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
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+1];
    for(int i=0;i<=m;i++){
    	cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<m;i++){
    	int res=a[i]^a[m];
    	int c=0;
    	while(res){
    		if(res & 1)c++;
    		res=res>>1;
    		
    	}
    	if(c<=k){
    		ans++;
    	}
    }
    cout<<ans<<endl;
    
    
    
    return 0;
}