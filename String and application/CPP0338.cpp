#include <bits/stdc++.h>
using namespace std;

int main() {	
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		int k;
		cin >> s >> k;
		
		int ans = 0;
		
		for (int i = 0; i < s.size(); ++i) {
			int cnt[256];
			memset(cnt, 0, sizeof(cnt));
			int dem = 0;
			
			for (int j = i; j < s.size(); ++j) {
				if (cnt[s[j]] == 0)
					++dem;
					
				if (dem == k)
					++ans;			
				if (dem > k) break;	
					cnt[s[j]] = 1;						
			}				
		}
			
		cout << ans << "\n";
	}

	return 0;
}
