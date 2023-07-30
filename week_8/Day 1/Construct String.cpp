// Problem: Construct String
// Contest: CodeChef - START83
// URL: https://www.codechef.com/problems/CONSTR
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
    	int temp=1;
    	char ch=s[0];
    	string ans="";
    	for(int i=1;i<n;i++){
    		if(s[i]==ch){
    			temp++;
    		}
    		else{
    			if(temp%2==0){
    				ans+=ch;
    				ans+=ch;
    			}
    			else{
    				ans+=ch;
    			}
    			ch=s[i];
    			temp=1;
    		}
    	}
    	if(temp%2==0){
    				ans+=ch;
    				ans+=ch;
    			}
    			else{
    				ans+=ch;
    			}
    	cout<<ans<<endl;
    }
    
    
    
    return 0;
}