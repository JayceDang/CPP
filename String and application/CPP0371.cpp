#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	vector<char> v;
	
	for (int i = 0; i < s.size(); ++i)
		if (s[i] != 'A' && s[i] != 'E' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y' && s[i] != 'I'
			&& s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' && s[i] != 'i')
			v.push_back(tolower(s[i]));

	for (int i = 0; i < v.size(); ++i)
		cout << "." << v[i];
	
	return 0;
}
