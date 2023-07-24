// Problem: Chef and Battery 
// Contest: CodeChef - START86
// URL: https://www.codechef.com/problems/FIFTYPE
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
    	int c=0;
    	while(n!=50){
    		if(n>50){
    			n-=3;
    			c++;
    		}
    		else{
    			n+=2;
    			c++;
    		}
    	}
    	cout<<c<<endl;
    }
    
    
    
    return 0;
}