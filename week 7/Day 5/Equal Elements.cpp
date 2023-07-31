// Problem: Equal Elements
// Contest: CodeChef - START80
// URL: https://www.codechef.com/problems/EQUALELE
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
    	long long int n;
    	cin>>n;
    	vector<long long int>v(n);
    	for(long long int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	sort(v.begin(),v.end());
    	long long int c=1,mx=-1;
    	for(long long int i=0;i<n-1;i++){
    		if(v[i]==v[i+1]){
    			c++;
    			if(mx<c){
    				mx=c;
    			}
    		}
    		else c=1;
    	}
    	if(mx==-1)cout<<n+mx<<endl;
    	else cout<<n-mx<<endl;
    	
    }
    
    
    
    return 0;
}