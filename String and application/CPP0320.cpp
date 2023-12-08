#include <bits/stdc++.h>
using namespace std;

int check(string &s) {
	map<char, bool> mp;

	for (int i = 0; i < s.size(); ++i) {
		if (s[0] == '0' || !isdigit(s[i]))
			return -1;		
		else
			mp[s[i]] = 1;		
	}	
	if (mp.size() == 10)
		return 1;
	return 0;	
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		if (check(s) == 0)
			cout << "NO\n";
		else if (check(s) == -1)
			cout << "INVALID\n";
		else 
			cout << "YES\n";
	}
	return 0;
}
