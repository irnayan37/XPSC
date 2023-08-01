// Problem: H1. Maximum Crossings (Easy Version)
// Contest: Codeforces - Codeforces Round 790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/H1
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
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		
    	}
    	int c=0;
    	for(int i=1;i<n;i++){
    		
    		for(int j=0;j<i;j++){
    			if(a[j]>=a[i] && a[i]<=n){
    				c++;
    			}
    		}
    	}
    	cout<<c<<endl;
    	
    }
    
    
    
    return 0;
}