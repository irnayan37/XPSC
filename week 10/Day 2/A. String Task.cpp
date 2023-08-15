// Problem: A. String Task
// Contest: Codeforces - Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/A
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
    string p;
    cin>>p;
    char c;
    string s="";
    for(int i=0;i<p.size();i++){
    	 if(p[i]>='A' && p[i]<='Z'){
    	 	p[i]=p[i]+32;
    	 }
    	 if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='y'){
    	 	continue;
    	 }
    	 else {
    	 	s+=".";
    	 	s+=p[i];
    	 }
    }
    cout<<s<<endl;
    
    
    return 0;
}