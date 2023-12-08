#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		long long sum = 0;

		for (int i = 0; i < s.size(); ++i) {
			if (!isdigit(s[i]))
				s[i] = ' ';
		}	
		stringstream ss(s);
		string token;
		while(ss >> token) {
			sum += stoi(token);
		}		
		cout << sum << "\n";	
	}

	return 0;
}
