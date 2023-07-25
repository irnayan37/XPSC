// Problem: A. Divisible Array
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1828/A
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
    	for(int i=1;i<=n;i++){
    		a[i]=i*2;
    	}
    	for(int i=1;i<=n;i++){
    		cout<<a[i]<<" ";
    	}
    	cout<<endl;
    }
    
    
    
    return 0;
}