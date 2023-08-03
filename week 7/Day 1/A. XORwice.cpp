// Problem: A. XORwice
// Contest: Codeforces - Codeforces Round 676 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1421/A
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
    	int a,b;
    	cin>>a>>b;
    	//int ans=(a^max(a,b)) + (b^max(a,b));
    	int ans=a^b;
    	cout<<ans<<endl;
    }
    
    
    
    return 0;
}