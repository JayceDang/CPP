#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		map<int, int> mp;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			mp[x] = 1;
		}
		
		for (int i = 1; i < 1e6+1; ++i) {
			int ok = 0;
			if (!mp[i]) {
				cout << i << "\n";
				ok = 1;
			}
			if (ok == 1)
				break;
		}
		cout << "\n";
	}

	return 0;
}
