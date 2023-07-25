// Problem: Candy Store
// Contest: CodeChef - START78
// URL: https://www.codechef.com/problems/CANDYSTORE
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
    	int a,b;
    	cin>>a>>b;
    	if(b<=a)cout<<b<<endl;
    	else cout<<a+(b-a)*2<<endl;
    }
    
    
    
    return 0;
}