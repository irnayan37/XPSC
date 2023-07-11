// Problem: D. Coprime
// Contest: Codeforces - Codeforces Round 827 (Div. 4)
// URL: https://codeforces.com/contest/1742/problem/D
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
    	long long int n;
    	cin>>n;
    	vector<long long int>v(1001,0),a(n);
    	for(long long int i=0;i<n;i++){
    		cin>>a[i];
    		v[a[i]]=i+1;
    	}
    	long long int mx=-1;
    	for(long long int i=1;i<=1000;i++){
    		for(long long int j=1;j<=1000;j++){
    			if(__gcd(i,j)==1 && v[i]>0 && v[j]>0){
    				mx=max(mx,v[i]+v[j]);
    			}
    		}
    	}
    	cout<<mx<<endl;
    	
    	
    }
    
    
    
    return 0;
}