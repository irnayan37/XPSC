// Problem: B. Petr and a Combination Lock
// Contest: Codeforces - Hello 2019
// URL: https://codeforces.com/problemset/problem/1097/B
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
    
    	int n;
    	cin>>n;
    	int a[n+3];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int c=0;
    	for(int i=0;i<(1<<n);i++){
    		vector<int>v;
    		int sum=0;
    		for(int j=0;j<n;j++){
    			if((i&(1<<j))!=0){
    				sum+=a[j];
    			}
    			else{
    				sum-=a[j];
    			}
    		}
    		if(sum%360==0){
    			c=1;
    			cout<<"YES\n";
    			break;
    		}
    	}
    	if(c==0)
    	 cout<<"NO\n";
    	
    
    
    
    
    return 0;
}