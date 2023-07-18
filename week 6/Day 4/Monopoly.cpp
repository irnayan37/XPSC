// Problem: Monopoly
// Contest: CodeChef - START89
// URL: https://www.codechef.com/problems/MONOPOLY2
// Memory Limit: 256 MB
// Time Limit: 500 ms
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
    	int a,b,c,d;
    	cin>>a>>b>>c>>d;
    	if(d>a+b+c){
    		cout<<"YES\n";
    		
    	}
    	else if(c>a+d+b){
    		cout<<"YES\n";
    		
    	}
    	else if(b>a+c+d){
    		cout<<"YES\n";
    		
    	}
    	else if(a>b+c+d){
    		cout<<"YES\n";
    		
    	}
    	else 
    	{
    		cout<<"NO\n";
    		
    	}
    }
    
    
    
   
}