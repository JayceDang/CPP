#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, x;
		cin >> n >> x;
		
		multimap<int, int> mp1;
		
		for (int i = 0; i < n; ++i) {
			int k;
			cin >> k;		
			mp1.insert({abs(x-k),k});			
		}
		
		for (auto x : mp1) {
			cout << x.second << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
