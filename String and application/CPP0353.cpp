#include <bits/stdc++.h>
using namespace std;

bool ThuanNghich(string s) {
	int l = s[0], r = s[s.size()-1];
	
	while (l < r) {
		if (s[l]-'0' != s[r]-'0')
			return 0;
		++l;
		--r;	
	}
	return 1;
}
bool thuannghich(string s){ 
	for(int i = 0 ; i <= (s.size() + 1) / 2 ; i++){ 
		if(s[i] != s[s.size() - i - 1]) 
			return false; 
	} 
	return true; 
}

bool check(string s) {
	for (int i = 0; i < s.size(); ++i) {
		s[i] = tolower(s[i]);
	}
	
	string ans = "";
	for (int i = 0; i < s.size(); ++i) {
		if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
			ans += "2";
		else if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
			ans += "3";
		else if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
			ans += "4";
		else if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
			ans += "5";
		else if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
			ans += "6";
		else if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
			ans += "7";
		else if (s[i] == 't' || s[i] == 'u' || s[i] == 'v')
			ans += "8";
		else if (s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
			ans += "9";
		else
			return 0;						
	}
	if (thuannghich(ans))
		return 1;
	return 0;
}

int main() {	
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		if (check(s)) {
			cout << "YES\n";
		} else
			cout << "NO\n";		
	}		
	
	return 0;
}
