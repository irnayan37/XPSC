// Problem: MIN To MAX
// Contest: CodeChef - START82
// URL: https://www.codechef.com/problems/OPMIN
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
    	vector<int>a(n);
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	int value=*min_element(a.begin(),a.end());
    	int cnt=0;
    	for(int i=0;i<n;i++){
    		if(a[i]>value)cnt++;
    	}
    	cout<<cnt<<endl;
    }
    
    
    
    return 0;
}