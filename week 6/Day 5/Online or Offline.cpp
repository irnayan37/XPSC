// Problem: Online or Offline
// Contest: CodeChef - START88
// URL: https://www.codechef.com/problems/FOODPLAN
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
    	double x,y;
    	cin>>x>>y;
    	double d=x-(x*0.1);
    	
    	
    	if(d>y)cout<<"DINING\n";
    	else if(d<y)cout<<"ONLINE\n";
    	else cout<<"EITHER\n";
    }
    
    
    
    return 0;
}