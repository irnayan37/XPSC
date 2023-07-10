// Problem: A - Wrong Subtraction
// Contest: Virtual Judge - XPSC Batch 2 | Practice Contest 2 | Div 3
// URL: https://vjudge.net/contest/568191#problem/A
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
    long long int n,k;
    cin>>n>>k;
    for(int i=1;i<=k;i++){
    	if(n%10!=0){
    		n--;
    	}
    	else{
    		n=n/10;
    	}
    }
    cout<<n<<endl;
    
    
    
    return 0;
}