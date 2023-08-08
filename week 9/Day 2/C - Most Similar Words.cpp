// Problem: C. Most Similar Words
// Contest: Codeforces - Codeforces Round 790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/C
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
    	int n,m;
    	cin>>n>>m;
    	vector<string>v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	int mn=1e9;
    	for(int i=0;i<n;i++){
    		
    		for(int j=0;j<n;j++){
    			if(i!=j){
    				int diff,sum=0;
    				for(int k=0;k<m;k++){
    					int x,y;
    					x=v[i][k]-'a';
    					y=v[j][k]-'a';
    				diff=abs(x-y);
    				sum+=diff;
    				}
    				mn=min(mn,sum);
    			}
    		}
    		
    	}
    	cout<<mn<<endl;
    	
    }
    
    
    
    return 0;
}