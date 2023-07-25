// Problem: Better Deal
// Contest: CodeChef - START79
// URL: https://www.codechef.com/problems/BETDEAL
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
    	double a,b,x,y;
    	cin>>a>>b;
    	x=100-(a*1);
    	y=200-(b*2);
    	if(x<y)cout<<"FIRST\n";
    	else if(x>y)cout<<"SECOND\n";
    	else cout<<"BOTH\n";
    }
    
    
    
    return 0;
}