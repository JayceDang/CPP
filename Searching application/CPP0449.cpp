#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, x;
		cin >> n >> x;
		
		int a[n];
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		
		sort(a, a+n);
		vector<int> v;
		
		for (auto i : a) {
			if (i >= x) 
				v.push_back(i);			
		}
		int ok = -1;
		for (int i = 0; i < v.size(); ++i) {
			int *res = find(a, a+n, v[i]-x);
			
			if (res != a+n) {
				ok = 1;
			}
			else ok = -1;
			if (ok == 1)
				break;
		}
		cout << ok << "\n";
	}

	return 0;
}
