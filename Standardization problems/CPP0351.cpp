#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	
	while (t--) {
		int n;
		cin >> n;
		
		cin.ignore();
		string s;
		getline(cin, s);
		
		string token;
		vector<string> v;
		
		map<string, int> mp;
		
		stringstream ss(s);
		
		while (ss >> token) {
			token[0] = toupper(token[0]);
			for (int i = 1; i < token.size(); ++i) {
				token[i] = tolower(token[i]);
			}		
			v.push_back(token);
		}
		
		if (n == 1) {
			cout << v[v.size()-1] << " ";
			for (int i = 0; i < v.size()-1; ++i) {
				cout << v[i] << " ";
			}
		} else if (n == 2) {
			for (int i = 1; i < v.size(); ++i) {
				cout << v[i] << " ";
			}
			cout << v[0];
		}
		cout << "\n";
	}
	
	return 0;
}
