// Problem: 11413 - Fill the Containers
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2408&fbclid=IwAR02obU23CMTuMGRzOk39uLr8jyOLLiNYj6-aSgXTmro59FeYR2HRLGXzAk
// Memory Limit: 32 MB
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
    int n,m;
    while(cin>>n>>m){
    	int a[n];int mx=0;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		mx=max(mx,a[i]);
    	}
    	//sort(a,a+n);
    	int l=mx,r=1e9;
    	
    	int ans;
    	while(l<=r){
    		int cap=l+(r-l)/2;
    		int c=1;
    		int s=0;
    		
    		for(int i=0;i<n;i++){
    			if(a[i]+s<=cap){
    				s+=a[i];
    			}
    			else {
    				c++;
    				s=a[i];
    			}
    		}
    		if(c<=m){
    			ans=cap;
    			r=cap-1;
    		}
    		else{
    			l=cap+1;
    		}
    		
    		
    	}
    	cout<<ans<<endl;
    	
    	
    	
    }
    
    
    
    return 0;
}