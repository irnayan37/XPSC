// Problem: B. Restore the Weather
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n,k;cin>>n>>k;
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++){
        	cin>>a[i].first;
        	a[i].second=i;
        	
        }
        sort(a.begin(),a.end());
        
        vector<int>b(n);
        for(int i=0;i<n;i++){
        	cin>>b[i];
        }
        sort(b.begin(),b.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++){
        	ans[a[i].second]=b[i];
        }
        for(int i=0;i<n;i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
