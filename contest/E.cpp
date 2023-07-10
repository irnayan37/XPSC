// Problem: E - Disturbed People
// Contest: Virtual Judge - XPSC Batch 2 | Practice Contest 2 | Div 3
// URL: https://vjudge.net/contest/568191#problem/E
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
    int n;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n-2;i++){
    	if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
    		c++;
    		i+=2;
    	}
    }
    cout<<c;
    
    
    
    return 0;
}