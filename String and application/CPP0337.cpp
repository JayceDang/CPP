#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		map<char, int> mci;
		for (char x : s) {
			++mci[x];
		}
		
		int cnts[256] = {0}, len  = mci.size(), ans = INT_MAX, left = 0, cnt = 0;
		for (int i = 0; i < s.size(); ++i) {
			++cnts[s[i]];
			if (cnts[s[i]] == 1)
				++cnt;
			if (cnt == len) {
				while (cnts[s[left]] > 1) {
					cnts[s[left]]--;
					++left;
				}
				ans = min(ans, i-left+1);
			}
		}
		
		cout << ans << "\n";
	}

	return 0;
}
