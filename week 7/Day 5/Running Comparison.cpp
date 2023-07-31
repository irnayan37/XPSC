// Problem: Running Comparison
// Contest: CodeChef - START80
// URL: https://www.codechef.com/problems/RUNCOMPARE
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
    	int a[n+3],b[n+3];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(int i=0;i<n;i++){
    		cin>>b[i];
    	}
    	int cnt=0;
    	for(int i=0;i<n;i++){
    		if(a[i]*2<b[i] || b[i]*2<a[i]){
    			continue;
    		}
    		else{
    			cnt++;
    		}
    	}
    	cout<<cnt<<endl;
    	
    	
    	
    }
    
    
    
    return 0;
}