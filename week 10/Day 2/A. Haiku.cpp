// Problem: A. Haiku
// Contest: Codeforces - Codeforces Beta Round 70 (Div. 2)
// URL: https://codeforces.com/problemset/problem/78/A
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
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    string c;
    getline(cin,c);
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=0;i<a.size();i++){
    	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
    		cnt1++;
    	}
    	
    }
    for(int i=0;i<b.size();i++){
    	if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
    		cnt2++;
    	}
    }
    for(int i=0;i<c.size();i++){
    	if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
    		cnt3++;
    	}
    }
    
    	
    if(cnt1==5 && cnt2==7 && cnt3==5){
    	cout<<"YES\n";
    }
    else cout<<"NO\n";
    
    
    
    
    return 0;
}