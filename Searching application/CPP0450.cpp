#include <bits/stdc++.h>
using namespace std;

int check(int a[], int n) {
	map<int, int> mp;
	
	for (int i = 0; i < n; ++i) {
		++mp[a[i]];
		if (mp[a[i]] == 2)
			return a[i];
	}
	
	return -1;
}

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
		
		int res = check(a, n);		
		if (res == -1) 
			cout << "-1\n";
		 else 
			cout << res << "\n";		
	}

	return 0;
}
