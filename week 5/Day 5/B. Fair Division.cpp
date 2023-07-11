// Problem: B. Fair Division
// Contest: Codeforces - Codeforces Round 693 (Div. 3)
// URL: https://codeforces.com/contest/1472/problem/B
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
    	int a[n+3];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int one=0,two=0,sum;
    	for(int i=0;i<n;i++){
    		
    		if(a[i]==1)one++;
    		if(a[i]==2)two+=2;
    	}
    	sum=one+two; 
    	if(sum%2!=0)cout<<"NO\n";
    	else if((two/2)%2!=0 &&  one==0)cout<<"NO\n";
    	
    	else cout<<"YES\n";
    	
    	
    }
    
    
    
    return 0;
}