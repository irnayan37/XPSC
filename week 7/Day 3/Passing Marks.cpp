// Problem: Passing Marks
// Contest: CodeChef - START78
// URL: https://www.codechef.com/problems/CUTOFF
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
    	int x,y;
    	cin>>x>>y;
    	vector<int>v(x);
    	for(int i=0;i<x;i++){
    		cin>>v[i];
    	}
    	sort(v.rbegin(),v.rend());
    	cout<<v[y-1]-1<<endl;
    }
    
    
    
    return 0;
}