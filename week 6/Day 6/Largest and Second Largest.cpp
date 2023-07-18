// Problem: Largest and Second Largest
// Contest: CodeChef - START88
// URL: https://www.codechef.com/problems/LARGESECOND
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
    	sort(a.begin(),a.end());
    	reverse(a.begin(),a.end());
    	int sum;
    	for(int i=0;i<n;i++){
    		if(a[i]!=a[i+1]){
    			sum=a[i]+a[i+1];
    			break;
    		}
    	}
    	cout<<sum<<endl;
    }
    
    
    
    return 0;
}