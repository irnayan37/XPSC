// Problem: A. Morning Sandwich
// Contest: Codeforces - Educational Codeforces Round 152 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1849/problem/A
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
    	int n,c,h;
    	cin>>n>>c>>h;
    	if(n<=c+h){
    		cout<<2*n-1<<endl;
    	}
    	else {
    		cout<<2+(c+h)+(c+h)-1<<endl;
    	}
    }
    
    
    
    return 0;
}