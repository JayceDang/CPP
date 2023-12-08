#include <bits/stdc++.h>
using namespace std;

bool check1(string& s) {
	if (s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10])
		return 1;	
	return 0;
}

bool check2(string& s) {
	if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10])
		return 1;		
	return 0;	
}

bool check3(string& s) {	
	if (s[5] != '6' && s[5] != '8')
		return 0;
	if (s[6] != '6' && s[6] != '8')
		return 0;
	if (s[7] != '6' && s[7] != '8')
		return 0;
	if (s[9] != '6' && s[9] != '8')
		return 0;
	if (s[10] != '6' && s[10] != '8')
		return 0;		
	return 1;		
}

bool check4(string& s) {	
	if (s[5]-'0' < s[6]-'0' && s[6]-'0' < s[7]-'0' && s[7]-'0' < s[9]-'0' && s[9]-'0' < s[10]-'0')
		return 1;	
	return 0;
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		if (check1(s) || check2(s) || check3(s) || check4(s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}

	return 0;
}
