// Problem: A. Restoring Three Numbers
// Contest: Codeforces - Codeforces Round 552 (Div. 3)
// URL: https://codeforces.com/contest/1154/problem/A
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
    int a[5];
    for(int i=0;i<4;i++){
    	cin>>a[i];
    }
    sort(a,a+4);
    cout<<a[3]-a[2]<<" "<<a[3]-a[1]<<" "<<a[3]-a[0]<<endl;
    
    
    
    
    
    return 0;
}