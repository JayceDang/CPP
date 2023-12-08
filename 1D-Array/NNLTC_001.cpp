#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	
	map<int, int> mp;
	vector<int> v;
	
	while (cin >> n) {
		if (!mp[n])
			v.pb(n);
		++mp[n];
	}
	
	for (auto x : v)
		cout << x << " " << mp[x] << "\n";
	 
	return 0;
}
