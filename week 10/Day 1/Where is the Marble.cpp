// Problem: 10474 - Where is the Marble?
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415&fbclid=IwAR1AvrmyvzCf-NszbOsz3oAAVcv84Q7gxbY18sasMFrvTrwKFd7DCyiNsHU
// Memory Limit: 32 MB
// Time Limit: 3000 ms
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
    int n,q;
    int cs=1;
    while(cin>>n>>q){
    	
    	if(n==0 && q==0)break;
    	
    	cout<<"CASE# "<<cs<<":"<<endl;
    	cs++;
    	vector<int>v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	sort(v.begin(),v.end());
    	while(q--){
    		int x;cin>>x;
    		auto it=lower_bound(v.begin(),v.end(),x);
    		int id=it-v.begin();
    		int ans;
    		if(id==n)ans=-1;
    		else if(v[id]!=x)ans=-1;
    		else ans=id+1;
    		
    		if(ans==-1)cout<<x<<" not found"<<endl;
    		else cout<<x<<" found at "<<ans<<endl;
    		
    	}
    }
    
    
    
    return 0;
}