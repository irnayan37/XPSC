// Problem: Bus  Seat Numbering
// Contest: CodeChef - START91
// URL: https://www.codechef.com/problems/SEATNUMBER
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
    	if(n>=1 && n<=10)cout<<"Lower Double"<<endl;
    	else if(n>=11 && n<=15) cout<<"Lower Single"<<endl;
    	else if(n>=16 && n<=25) cout<<"Upper Double"<<endl;
    	else cout<<"Upper Single"<<endl;
    }
    
    
    
    return 0;
}