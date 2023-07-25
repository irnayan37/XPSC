// Problem: Add smallest prime factor
// Contest: CodeChef - START79
// URL: https://www.codechef.com/problems/PRIMEFACT
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
    	int x,y,p;
    	cin>>x>>y;
    	if(x%2==0)p=2;
    	else if(x%3==0)p=3;
    	
    	else p=x;
    	x=x+p;
    	int d=y-x;
    	int ans=d/2;
    	if(d%2!=0){
    		ans+=1;
    	}
    	cout<<ans+1<<endl;
    	
    }
    
    
    
    return 0;
}