// Problem: Valid Expression
// Contest: CodeChef - START78
// URL: https://www.codechef.com/problems/EVALMAS
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
    	int n,k;
    	cin>>n>>k;
    	if(-(n-1)<=k && (n+1)>=k){
    		int c=1;
    			int count=n;
    			string s="";
    		while(1){
    			
    			if((k-c)>0 && count>0){
    				s+='+';
    				c+=1;
    				count--;
    			}
    			else if((k-c)<0 && count>0){
    				s+='-';
    				c-=1;
    				count--;
    			}
    			else if((k-c)==0 && count>0){
    				s+='*';
    				count--;
    			}
    			else if(!count){
    				break;
    			}
    			
    			
    		}
    		cout<<s<<endl;
    	}
    	else{
    		cout<<"-1"<<endl;
    	}
    }
    
    
    
    return 0;
}