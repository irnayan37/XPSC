// Problem: C. Prepend and Append
// Contest: Codeforces - Codeforces Round 849 (Div. 4)
// URL: https://codeforces.com/contest/1791/problem/C
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
    	string s;
    	cin>>s;
    	int l=0,r=n-1;
    	while(l<r){
    		if((s[l]=='0' && s[r]=='1')|| (s[l]=='1' && s[r]=='0')){
    			n-=2;
    			l++;
    			r--;
    			
    		}
    		else break;
    	}
    	cout<<n<<endl;
    }
    
    
    
    return 0;
}