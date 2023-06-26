// Problem: C. Minimum Varied Number
// Contest: Codeforces - Codeforces Round 811 (Div. 3)
// URL: https://codeforces.com/contest/1714/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>ans;
		
		for(int i=9;i>=1;i--){
			if(n==0){
				
				break;
			}
			 if(n<i){
				ans.push_back(n);
				break;
			}
			else{
				ans.push_back(i);
				n-=i;
				
			}
		}
		reverse(ans.begin(),ans.end());
		for(int i=0;i<ans.size();i++){
			cout<<ans[i];
		}
		cout<<endl;
		
	}
}