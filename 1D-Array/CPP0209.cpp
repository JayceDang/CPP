#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n, q;
		cin >> n >> q;
		
		int a[n];
		
		for (int i = 1; i <= n; ++i)
			cin >> a[i];
		
		ll prefix[n+1] = {0};
		
		for (int i = 1; i <= n; ++i)
			prefix[i] = prefix[i-1] + a[i];
		
		while (q--) {
			int l, r;
			cin >> l >> r;
					
			cout << prefix[r] - prefix[l-1] << "\n";		
		}
		cout << "\n";
	}

	return 0;
}
