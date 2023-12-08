#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, cnt = 0;
		cin >> n;

		set<int> a[n];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				int x;
				cin >> x;
				a[i].insert(x);
			}
		}
		
		for (auto i : a[0]) {
			bool check = true;
			for (int j = 1; j < n; ++j) {
				if(a[j].find(i) == a[j].end()) {
					check = false;
					break;
				}
			}			
			if (check)
				++cnt;
		}
		
		cout << cnt << "\n";	
	}
	
	return 0;
}
