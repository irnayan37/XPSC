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
    int a[n+3];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    vector<vector<int>>subsets;
    for(int i=0;i<(1<<n);i++){
    	vector<int>subset;
    	for(int j=0;j<n;j++){
    		if((i & (1<<j))!=0){
    			subset.push_back(a[j]);
    		}
    	}
    	subsets.push_back(subset);
    }
    for(int i=0;i<(1<<n);i++){
    	for(auto val:subsets[i]){
    		cout<<val<<" ";
    	}
    	cout<<endl;
    }
    
    
    
    return 0;
}