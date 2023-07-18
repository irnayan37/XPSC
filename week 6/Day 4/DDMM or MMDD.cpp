// Problem: DDMM or MMDD
// Contest: CodeChef - START89
// URL: https://www.codechef.com/problems/DDMMORMMDD
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
    	string s;
    	cin>>s;
    	string d=s.substr(0,2);
    	int p=stoi(d);
    	string e=s.substr(3,6);
    	int q=stoi(e);
    	if(p>12 && q<=12)cout<<"DD/MM/YYYY\n";
    	else if(q>12 && p<=12) cout<<"MM/DD/YYYY\n";
    	else cout<<"BOTH\n";
    }
    
    
    
    return 0;
}