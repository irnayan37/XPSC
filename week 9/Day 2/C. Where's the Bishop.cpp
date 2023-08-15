// Problem: C. Where's the Bishop?
// Contest: Codeforces - Codeforces Round 799 (Div. 4)
// URL: https://codeforces.com/contest/1692/problem/C
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
    	char a[8][8];
    	for(int i=0;i<8;i++){
    		for(int j=0;j<8;j++){
    			cin>>a[i][j];
    		}
    	}
    	
    	
    	for(int i=0;i<8;i++){
    		for(int j=0;j<8;j++){
    			if(a[i][j]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#'
    			&& a[i+1][j+1]=='#' && a[i+1][j-1]=='#'){
    				cout<<i+1<<" "<<j+1;
    				break;
    			}
    		}
    	}
    	cout<<endl;
    	
    }
    
    
    
    return 0;
}