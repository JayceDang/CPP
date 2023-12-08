#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
    	int n;
    	cin >> n;
    	
    	int a[n];
    	for (int i = 0; i < n; ++i) {
    		cin >> a[i];
		}
    	
    	int res = 0;
    	
    	for (int i = 0; i < n; ++i) {
    		for (int j = n-1; j >= 0; j--) {
    			if (j - i <= res)
    				break;
    			if (a[j] >= a[i]) {
    				res = max(res, j-i); 
				}
			}
		}
    	cout << res << "\n";
	}
    
    return 0;
}
