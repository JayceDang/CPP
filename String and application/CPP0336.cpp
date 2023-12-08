#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s, w;
		cin >> s >> w;
		
		int cnts[256] = {0}, cntw[256] = {0};
		for (int i = 0; i < w.size(); ++i) {
			++cntw[w[i]];
		} 
		int ans = INT_MAX, left = 0, cnt = 0, idx = -1;
		for (int i = 0; i < s.size(); ++i) {
			++cnts[s[i]];
			if (cnts[s[i]] <= cntw[s[i]])
				++cnt;
			if (cnt == w.size()) {
				while (cnts[s[left]] > cntw[s[left]] || cntw[s[left]] == 0) {
					if (cnts[s[left]] > cntw[s[left]]) {
						cnts[s[left]]--;
					}
					++left;
				}
				if (ans > i-left+1) {
					ans = i-left+1;
					idx = left;
				}
			}
		}
		
		if (idx == -1) 
			cout << -1 << "\n";		
		else 
			cout << s.substr(idx, ans) << "\n";
	}

	return 0;
}
