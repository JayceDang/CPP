#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int res = 0;

		for (int i = 0; i < s.size(); ++i) {
			if (!isdigit(s[i]))
				s[i] = ' ';
		}
		
		stringstream ss(s);
		string token;
		while(ss >> token) {
			int x = stoi(token);
			res = max(res, x);
		}		
		cout << res << "\n";	
	}

	return 0;
}
