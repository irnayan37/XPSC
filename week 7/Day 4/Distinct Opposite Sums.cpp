// Problem: Distinct Opposite Sums
// Contest: CodeChef - START79
// URL: https://www.codechef.com/problems/DISTOPPSUMS
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
    	vector<int>v;
    	for(int i=1;i<=n;i++){
    		v.push_back(i);
    	}
    	sort(v.rbegin(),v.rbegin()+(n/2));
    	for(int i=0;i<v.size();i++){
    		cout<<v[i]<<" ";
    	}
    	cout<<endl;
    }
    
    
    
    return 0;
}