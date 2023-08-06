// Problem: C. Little Girl and Maximum Sum
// Contest: Codeforces - Codeforces Round 169 (Div. 2)
// URL: https://codeforces.com/problemset/problem/276/C
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
    int n,q;
    cin>>n>>q;
    vector<ll>a(n+1);
    for(ll i=1;i<=n;i++){
    	cin>>a[i];
    }
   vector<ll>mp(n+2),v(n+2);
    for(ll i=0;i<q;i++){
    	int l,r;
    	cin>>l>>r;
    	mp[l]++;
    	mp[r+1]--;
    }
   for(ll i=1;i<=n+1;i++){
   	v[i]=v[i-1]+mp[i];
   }
    sort(a.begin(),a.end(),greater<ll>());
    sort(v.begin(),v.end(),greater<ll>());
    ll sum=0;
    for(ll i=0;i<n;i++){
    	sum+=(a[i]*v[i]);
    }
    cout<<sum<<endl;
    
    
    
    
    return 0;
}