// Problem: A. Musical Puzzle
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string>p;
        for(int i=0;i<n-1;i++){
        	string x;
        	x.push_back(s[i]);
        	x.push_back(s[i+1]);
        	p.insert(x);
        }
        cout<<p.size()<<endl;
    }

    return 0;
}
