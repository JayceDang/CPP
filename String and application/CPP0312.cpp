#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while (t--) {
		string s;
		int k;		
		cin >> s >> k;		
		set<char> se;
		for (int i = 0; i < s.size(); ++i) {
			se.insert(s[i]);
		}

		if (k >= (26-se.size()))
			cout << "1\n";
		else 
			cout << "0\n";

	}
	
	return 0;
}
