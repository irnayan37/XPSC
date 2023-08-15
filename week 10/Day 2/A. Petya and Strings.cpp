// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round 85 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/112/A
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
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
    	s1[i]=tolower(s1[i]);
    }
    for(int i=0;i<s2.size();i++){
    	s2[i]=tolower(s2[i]);
    }
    if(s1<s2)cout<<"-1"<<endl;
    else if(s1>s2)cout<<"1"<<endl;
    else cout<<"0"<<endl;
    
    
    return 0;
}