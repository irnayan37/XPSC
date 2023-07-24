// Problem: Maximise Score
// Contest: CodeChef - START86
// URL: https://www.codechef.com/problems/MAXIMSCORE
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
    	int n;
    	cin>>n;
    	vector<int>v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	vector<int>a;
    	for(int i=0;i<n;i++){
    		int l=-1;
    		int r=-1;
    		if(i-1>=0)l=abs(v[i]-v[i-1]);
    		if(i+1<n) r=abs(v[i]-v[i+1]);
    		a.push_back(max(l,r));
    	}
    	int ans=1e9;
    	for(int i=0;i<a.size();i++){
    		if(a[i]<ans){
    			ans=a[i];
    		}
    	}
    	cout<<ans<<endl;
    	
    	
    	
    	
    }
    
    
    
   
}