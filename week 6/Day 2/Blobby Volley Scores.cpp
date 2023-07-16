// Problem: Blobby Volley Scores
// Contest: CodeChef - START91
// URL: https://www.codechef.com/problems/BLOBBYVOLLEY
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
    	string s;
    	cin>>s;
    	int a,b=0;
    	if(s[0]=='A'){
    		a=1;
    	}
    	else{
    		a=0;
    	}
    	for(int i=0;i<n;i++){
    		if(s[i]=='A' && s[i+1]=='A'){
    			a++;
    		}
    		else if(s[i]=='B' && s[i+1]=='B'){
    			b++;
    		}
    	}
    	cout<<a<<" "<<b<<endl;
    	
    	
    }
    
    
    
    return 0;
}