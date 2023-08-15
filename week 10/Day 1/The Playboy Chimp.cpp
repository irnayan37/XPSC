// Problem: 10611 - The Playboy Chimp
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552&fbclid=IwAR3MYo_0XKPMmMVJzL1SzIkOOFGnFiHJbQD2dPF7ZIq8ZkYNit1FME7F2xM
// Memory Limit: 32 MB
// Time Limit: 3000 ms
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
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
    	int x;cin>>x;
    	auto it1=upper_bound(a.begin(),a.end(),x);
    	int id1=it1-a.begin();
    	auto it2=lower_bound(a.begin(),a.end(),x);
    	int id2=it2-a.begin();
    	if(id2==0)cout<<"X ";
    	else cout<<a[id2-1]<<" ";
    	
    	if(id1==n)cout<<"X"<<endl;
    	else cout<<a[id1]<<endl;
    	
    	
    }
    
    
    
    return 0;
}