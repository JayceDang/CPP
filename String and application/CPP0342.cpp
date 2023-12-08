#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		int sum = 0;
		vector<char> v;
		
		for (int i = 0; i < s.size(); ++i) {
			if (!isdigit((int)s[i])) {
				v.push_back(s[i]);
			}			
			else {
				sum += s[i]-'0';
			}
		}
		sort(v.begin(), v.end());
		
		for (auto x : v) {
			cout << x;
		}
		
		if (sum != 0) 
			cout << sum << "\n";
	}

	return 0;
}
