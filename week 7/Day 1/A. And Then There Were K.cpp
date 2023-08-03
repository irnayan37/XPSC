// Problem: A. And Then There Were K
// Contest: Codeforces - Codeforces Round 721 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1527/A
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
    	int index;
    	for(int i=31;i>=0;i--){
    		if(n & (1<<i)){
    			cout<<(1<<i)-1<<endl;
    			break;
    		}
    	}
    	
    }
    
    
    
    return 0;
}