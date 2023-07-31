// Problem: Prefix Permutation
// Contest: CodeChef - START80
// URL: https://www.codechef.com/problems/SUMPERM
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
    	if(n%2!=0)cout<<"-1"<<endl;
    	else{
    		for(int i=1;i<=n;i+=2){
    			cout<<i+1<<" "<<i<<" ";
    		}
    		cout<<endl;
    	}
    	
    }
    
    
    
    return 0;
}