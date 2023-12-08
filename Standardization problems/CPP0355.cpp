#include <bits/stdc++.h>
using namespace std;

bool isEndl(string s) {
	char c = s.back();
	return (c == '.' || c == '?' || c == '!');
}

int main() {
	string s;
	vector<string> v;
	
	while (cin >> s) {
		for (int i = 0; i < s.size(); ++i)
			s[i] = tolower(s[i]);
		v.push_back(s);
	}
	
	bool check = 1;
	for (auto x : v) {
		if (check) {
			x[0] = toupper(x[0]);
			check = 0;
		}
		
		if (isEndl(x)) {
			x.pop_back();
			cout << x << "\n";
			check = 1;
		}
		else
			cout << x << " ";
	}

	return 0;
}
