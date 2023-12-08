#include <bits/stdc++.h>
using namespace std;

bool check1(string s) {
	
	int ok = 1, d = 0, c = s.size()-1;
	while (d < c) {
		if (s[d] == s[c]) {
			++d;
			--c;
		} else {
			ok = 0; //Dat co lenh
			break;
		}			
	}
	
	if (ok == 1)
		return true;
	return false;	
}

bool check2(string s) {
	for (int i = 0; i < s.size(); ++i) {
			if ((s[i]-'0') % 2 != 0)
			return false;
	}
			
	return true;
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		if (check2(s) && check1(s))
			cout << "YES\n";
		else 
			cout << "NO\n";
		
	}
	
	return 0;
}
