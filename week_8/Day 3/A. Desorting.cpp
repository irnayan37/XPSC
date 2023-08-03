// Problem: A. Desorting
// Contest: Codeforces - Codeforces Round 887 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1853/A
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
    	long long int n;
    	cin>>n;
    	long long int a[n+3];
    	for(long long int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	long long ans=1e9;
    	for(long long int i=0;i<n-1;i++){
    		if(a[i]>a[i+1]){
    			ans=0;
    			break;
    		}
    		ans=min(ans,((a[i+1]-a[i])/2) +1);
    		
    	}
    	cout<<ans<<endl;
    	
    	
    }
    
    
    
    return 0;
}