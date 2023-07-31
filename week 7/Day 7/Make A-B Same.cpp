// Problem: Make A-B Same
// Contest: CodeChef - START82
// URL: https://www.codechef.com/problems/MAKE_AB_SAME
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
    	int a[n+3],b[n+3];
    	int one=0,zero=0;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		if(a[i]==0)zero++;
    		else one++;
    	}
    	for(int i=0;i<n;i++){
    		cin>>b[i];
    	}
    	bool ok=false;
    	if(a[0]!=b[0] || a[n-1]!=b[n-1]){
    		cout<<"NO\n";
    		continue;
    	}
    	
    		for(int i=1;i<n-1;i++){
    		if(a[i]!=b[i] && a[i]==0 && one==0){
    			cout<<"NO\n";
    			ok=true;
    			break;
    		}
    		if(a[i]!=b[i] && a[i]==1){
    			cout<<"NO\n";
    			ok=true;
    			break;
    		}
    	
    	}
    	if(!ok){
    		cout<<"YES\n";
    		
    	}
    	
    	
    	
    }
    
    
    
    return 0;
}