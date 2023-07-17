// Problem: E - String Game 
// Contest: Virtual Judge - XPSC Batch 2 | Practice Contest 3 | Div 4
// URL: https://vjudge.net/contest/569683#problem/E
// Memory Limit: 1024 MB
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
    	int x=0,y=0;
    	for(int i=0;i<s.size();i++){
    		if(s[i]=='1')x++;
    		else y++;
    	}
    	
    	int ans=min(x,y);
    	if(ans%2==0)cout<<"Ramos\n";
    	else cout<<"Zlatan\n";
    	
    }
    
    
    
    return 0;
}