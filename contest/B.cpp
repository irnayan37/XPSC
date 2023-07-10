// Problem: B - Two-gram
// Contest: Virtual Judge - XPSC Batch 2 | Practice Contest 2 | Div 3
// URL: https://vjudge.net/contest/568191#problem/B
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
    string s;
    cin>>s;
    map<string,int>mp;
    for(int i=0;i<n-1;i++){
    	string p=s.substr(i,2);
    	
    	++mp[p];
    }
    int temp=0;
    string s1;
    for(auto i:mp){
    	if(i.second>temp){
    		temp=i.second;
    		s1=i.first;
    	}
    }
    cout<<s1<<endl;
    
    
    
    
    return 0;
}