#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	string x = a+b, y = b+a;
	return x > y;
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		vector<string> v;
		string s, ans = "";
		
		for (int i = 0; i < n; ++i) {
			cin >> s;
			v.push_back(s);
		}
		
		sort(v.begin(), v.end(), cmp);
		for (auto x : v) {
			ans += x;
		}
		cout << ans << "\n";
	}

	return 0;
}
