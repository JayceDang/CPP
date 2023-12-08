#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;	
		int a[n];
	
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}	
		sort(a, a+n, greater<int>());	
		vector<int> v;
	
		int l = 0, r = n-1;
		while (l <= r) {
			v.push_back(a[l]);
			v.push_back(a[r]);
			++l; --r;
	
		}
	
		for (int i = 0; i < n; ++i) {
			cout << v[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
