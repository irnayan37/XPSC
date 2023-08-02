// Problem: A. Escalator Conversations
// Contest: Codeforces - Codeforces Round 888 (Div. 3)
// URL: https://codeforces.com/contest/1851/problem/A
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
    	int n,m,k,h;
    	cin>>n>>m>>k>>h;
    	int a[n+3];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int d=(m-1)*k;
    	int cnt=0;
    	for(int i=0;i<n;i++){
    		if((abs(a[i]-h))<=d && (abs(a[i]-h)%k)==0 && abs(a[i]-h)>0){
    			cnt++;
    		}
    	}
    	cout<<cnt<<endl;
    }
    
    
    
    return 0;
}