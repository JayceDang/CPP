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
    	
    	vector<int> v1, v2;
    	
    	for (int i = 0; i < n; ++i) {
    		if (a[i] != 0 && a[i] == a[i+1]) {
    			a[i] *= 2;
    			a[i+1] = 0;
			}
		}
    	
    	for (auto x : a) {
    		if (x != 0) {
    			v1.push_back(x);
			}
			else
				v2.push_back(x);
		}
		
		for (auto x : v1) {
			cout << x << " ";
		}
		for (auto x : v2) {
			cout << x << " ";
		}		
    	cout << "\n";
	}
    
    return 0;
}
