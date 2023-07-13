// Problem: B. Unique Bid Auction
// Contest: Codeforces - Codeforces Round 686 (Div. 3)
// URL: https://codeforces.com/contest/1454/problem/B
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
    	int a[n+3];
    	map<int,int>mp;
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    		++mp[a[i]];
    	}
     int ans=1e9;
     int indx=-1;
    	for(int i=0;i<n;i++){
    		if(mp[a[i]]==1){
    			if(ans>a[i]){
    				ans=a[i];
    				indx=i+1;
    			}
    		}
    	}
    	cout << indx <<"\n";
    	
    	
    }
    
    
    
    return 0;
}