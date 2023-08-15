// Problem: E - E
// Contest: Virtual Judge - Chudur Budur Programming Contest 2023
// URL: https://vjudge.net/contest/575494?fbclid=IwAR2nem0wEfaTa6RIcyrnUIdrRP9Zav9l1WXzPjBur03r6A0bGlEoWr_WaB4#problem/E
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
    	int cnt=0;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		if(a[i]==1)cnt++;
    	}
    	cout<<n-(cnt/2)<<endl;
    }
    
    
    
    return 0;
}