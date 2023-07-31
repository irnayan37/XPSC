// Problem: Single-use Attack
// Contest: CodeChef - START80
// URL: https://www.codechef.com/problems/SINGLEUSE
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
    	int h,x,y;
    	cin>>h>>x>>y;
    	int c=0;
    	if(y>x){
    		h=h-y;
    		c++;
    	}
    	while(h>0){
    		
    			h=h-x;
    			c++;
    		
    		
    	}
    	cout<<c<<endl;
    }
    
    
    
    return 0;
}