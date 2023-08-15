// Problem: C. Advantage
// Contest: Codeforces - Codeforces Round 835 (Div. 4)
// URL: https://codeforces.com/contest/1760/problem/C
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
    	int n;
    	cin>>n;
    	vector<int>v(n),v1(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	v1=v;
    	sort(v1.begin(),v1.end());
    	for(int i=0;i<n;i++){
    		if(v[i]==v1[n-1])cout<<v[i]-v1[n-2]<<" ";
    		else cout<<v[i]-v1[n-1]<<" ";
    	}
    	cout<<endl;
    	
    }
    
    
    
    return 0;
}