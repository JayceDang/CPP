#include <bits/stdc++.h>
using namespace std;

int main() {	
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		int a[n], b[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			b[i] = a[i];
		}		
		sort(b, b+n);
		
		for (int i = 0; i < n; ++i) {
			int *res = upper_bound(b, b+n, a[i]);
			if(res == b+n) 
				cout<<"_ ";
			else 
				cout << *res << " ";			
		}
		
		cout << "\n";	
	}
	
	return 0;
}
