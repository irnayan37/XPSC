// Problem: Divide Pages
// Contest: CodeChef - START81
// URL: https://www.codechef.com/problems/BOOKPAGES
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
    ll sum=0;
    cin>>n;
   vector<int>v(n);
    for(int i=0;i<n;i++){

        cin>>v[i];

        sum+=v[i];

    }
    if(sum%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";



}

    
    
    
    return 0;
}