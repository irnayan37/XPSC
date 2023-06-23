#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        int i=0,j=n-1,sum=0;
        while(i<n/2){
        	int value1=a[j]-a[i];
        	sum+=value1;
        	i++;
        	j--;
        }
        cout<<sum<<endl;
    }

    return 0;
}
