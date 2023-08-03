// Problem: A. We Need the Zero
// Contest: Codeforces - Codeforces Round 862 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1805/A
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
    	int n;
    	cin>>n;
    	vector<int>a(n);
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int c=0,index;
    	for(int x=0;x<(1<<8);x++){
    		
    		vector<int>v=a;
    		for(int i=0;i<n;i++){
    			v[i]=v[i]^x;
    		}
    		int ans=0;
    		for(int i=0;i<v.size();i++){
    			ans=ans^v[i];
    		}
    		if(ans==0){
    			index=x;
    			c=1;
    			break;
    		}
    		
    	}
    	if(c==1)cout<<index<<endl;
    	else cout<<"-1"<<endl;
    	
    	
    }
    
    
    
    return 0;
}