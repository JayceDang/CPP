#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	
	while (t--) {
		string s;
		getline(cin, s);
		int cnt = 0;
		stringstream ss(s);
		while (ss >> s) {
			++cnt;
		}
		
		cout << cnt << "\n";
	}

	return 0;
}
