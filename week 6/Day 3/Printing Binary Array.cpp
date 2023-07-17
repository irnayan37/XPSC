// Problem: Printing Binary Array
// Contest: CodeChef - START90
// URL: https://www.codechef.com/problems/PRINTINGBIN
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
    	int n;
    	cin>>n;
    	vector<int>v(n);
    	for(int i=0;i<n;i++){
    		cin>>v[i];
    	}
    	vector<int>a;
    	for(int i=0;i<n;i++){
    		if(v[i]==0){
    			a.push_back(v[i]+1);
    		}
    		else{
    			a.push_back(v[i]-1);
    		}
    	}
    	
    	for(int i=0;i<a.size();i++){
    		cout<<a[i]<<" ";
    	}
    	cout<<endl;
    	
    }
    
    
    
    return 0;
}