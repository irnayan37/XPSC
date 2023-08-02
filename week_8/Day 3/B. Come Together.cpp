// Problem: B. Come Together
// Contest: Codeforces - Educational Codeforces Round 151 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1845/B
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
    	int ax,ay,bx,by,cx,cy,d;
    	cin>>ax>>ay>>bx>>by>>cx>>cy;
    	int ab=abs(ax-bx)+abs(ay-by);
    	int ac=abs(ax-cx)+abs(ay-cy);
    	int bc=abs(bx-cx) + abs(by-cy);
    	d=(ab+ac-bc)/2;
    	cout<<d+1<<endl;
    }
    
    
    
    return 0;
}