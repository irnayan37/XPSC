// Problem: Chef Eren
// Contest: CodeChef - START83
// URL: https://www.codechef.com/problems/CHEFEREN
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
    	int n,b,c;
    	cin>>n>>b>>c;
    	if(n%2==0){
    		cout<<((n/2)*b)+((n/2)*c)<<endl;
    	}
    	else{
    		cout<<((n/2)*b)+((n/2 +1)*c)<<endl;
    	}
    }
    
    
    
    return 0;
}