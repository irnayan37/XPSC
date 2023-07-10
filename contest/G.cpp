// Problem: G - Divisors of Two Integers
// Contest: Virtual Judge - XPSC Batch 2 | Practice Contest 2 | Div 3
// URL: https://vjudge.net/contest/568191#problem/G
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
    
    int n;
    cin>>n ;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    int temp=-1;
    for(auto i:v){
    	if(v[n-1]%i!=0){
    		temp=i;
    		break;
    	}
    }
    if(temp==-1){
    	cout<<v[n-1]<<" "<<v[0];
    }
    else{
    	cout<<v[n-1]<<" "<<temp;
    }
    
    
    return 0;
}