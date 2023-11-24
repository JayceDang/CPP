#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
	if (s.size() == 1)
		return false;
	int l = 0, r = s.size()-1;
	
	while (l <= r) {
		if (s[l] != s[r])
			return false;
		else
			++l;
			--r;
	}
	return true;
}

struct Res {
	string so;
	int dem;
};

bool cmp(Res& a, Res& b) {
	if (a.so.size() > b.so.size())
		return 1;
	if (a.so.size() == b.so.size()) {
		if (a.so > b.so)
			return 1;
	}
	return 0;	
}

int main() {
	string s;	
	map<string, int> mp;
	
	while (cin >> s) {
		if (check(s)) {
			mp[s]++;
		}		
	}
	
	Res a[mp.size()];
	int i = 0;
	for (const auto& x : mp) {
		a[i].so = x.first;
		a[i].dem = x.second;
		i++; 
	}
	
	sort(a, a+mp.size(), cmp);
	
	for (int i = 0; i < mp.size(); ++i) {
		cout << a[i].so << " " << a[i].dem << "\n";
	}
	
	return 0;
}
