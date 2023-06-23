// Problem: B. Long Long
// Contest: Codeforces - Codeforces Round 881 (Div. 3)
// URL: https://codeforces.com/contest/1843/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
/*
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
int t;cin>>t;
while(t--){
	long long int n;
	cin>>n;
    vector<long long int>a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    
    long long int c=0,mx=0;
    for(long long int i=0;i<n;i++){
    	if(a[i]<0)c++;
    	else if(a[i]>0 && c>0){
    		mx++;
    		c=0;
    	}
    }
    if(c>0)mx++;
    long long int sum=0;
    for(int i=0;i<n;i++){
    	sum+=abs(a[i]);
    }
    cout<<sum<<" "<<mx<<endl;
    
    
} 
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		
		long long int n;
		cin>>n;
		long long int a[n+3];
		for(long long int i=0;i<n;i++){
			cin>>a[i];
		}
		long long int c=0,value=0,sum=0;
		for(long long int i=0;i<n;i++){
			if(a[i]<0){
				c++;
				if(c==1){
					value++;
				}
			}
			else if(a[i]>0){
				c=0;
			}
		}
		for(long long int i=0;i<n;i++){
			sum+=abs(a[i]);
		}
		cout<<sum<<" "<<value<<endl;
	
		
	}
}