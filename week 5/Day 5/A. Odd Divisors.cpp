// Problem: A. Odd Divisor
// Contest: Codeforces - Codeforces Round 697 (Div. 3)
// URL: https://codeforces.com/contest/1475/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
    	
    	long long int n;
    	cin>>n;
    	
    	if((n&(n-1))==0)cout<<"NO\n";
    	else cout<<"YES\n";
    	
    	
    }
    
    
    
    return 0;
}