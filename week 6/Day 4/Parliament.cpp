// Problem: Parliament
// Contest: CodeChef - START89
// URL: https://www.codechef.com/problems/PARLIAMENT
// Memory Limit: 256 MB
// Time Limit: 500 ms
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
    	int n,m;
    	cin>>n>>m;
    	 if(n%2==0){
    	 	if(n/2<=m)cout<<"YES\n";
    	 	else cout<<"NO\n";
    	 }
    	 else if(n%2!=0){
    	 	if(n/2<m)cout<<"YES\n";
    	 	else cout<<"NO\n";
    	 }
    	 
    }
    
    
    
    return 0;
}