// Problem: B. Fibonaccharsis
// Contest: Codeforces - Codeforces Round 887 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1853/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
    	int n,k;
    	cin>>n>>k;
    	if(k>30){
    		cout<<0<<endl;
    		continue;
    	}
    	int cnt=0;
    	for(int i=0;i<=n;i++){
    		int second=n;
    		int first=i;
    		
    		bool ok=true;
    		for(int j=1;j<=k-2;j++){
    			int temp=second-first;
    			second=first;
    			first=temp;
    			
    			if(first<=second && first>-1){
    				continue;
    			}
    			else{
    				ok=false;
    				break;
    			}
    		}
    		if(ok){
    			cnt++;
    		}
    		
    	}
    	cout<<cnt<<endl;
    	
    }
    
    
    
    return 0;
}