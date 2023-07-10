// Problem: C - Vova and Train
// Contest: Virtual Judge - XPSC Batch 2 | Practice Contest 2 | Div 3
// URL: https://vjudge.net/contest/568191#problem/C
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
    	long long int d,s,l,r;
    	cin>>d>>s>>l>>r;
    	int ans=d/s;
    	
    	int x=(r-l+1)/s;
    	if(l<=s && s>=r)
    	x+=1;
    	cout<<ans-x<<endl;
    	
    }
    
    
    
    return 0;
}