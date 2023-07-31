// Problem: Difference Matrix
// Contest: CodeChef - START82
// URL: https://www.codechef.com/problems/MATDIF
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
    	
    	int x=1,y=2;
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=n;j++){
    			if(x<=n*n){
    				cout<<x<<" ";
    				x+=2;
    			}
    			else{
    				cout<<y<<" ";
    				y+=2;
    			}
    		}
    		cout<<endl;
    	}
    	cout<<endl;
    }
    
    
    
    return 0;
}