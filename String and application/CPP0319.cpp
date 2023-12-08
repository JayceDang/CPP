#include <bits/stdc++.h>
using namespace std;

int main() {
	int m;
	string s;
	
	cin >> m >> s;
	int S = stoi(s), X = S-1;
	if (S > 9*m || S < 1)
		cout << "-1 -1\n";	
	else {
		vector<int> vmax;
		
		while (S > 9) {
			vmax.push_back(9);
			S -= 9;
		}
		vmax.push_back(S);
	
		string Max = "";
		string Min = "";
		for (auto x : vmax)
			Max += to_string(x);
	
		while (Max.size() < m) {
			Max += "0";
		}	
	
		if (Max[Max.size()-1] == '0') {
			Min += '1';
			vector<int> vmin;
			while (X > 9) {
				vmin.push_back(9);
				X -= 9;
			}
			vmin.push_back(X);
	
			string res = "";
			for (auto x : vmin) {
				res += to_string(x);
			}
			reverse(res.begin(), res.end());
			Min += res;
			
			while (Min.size() < m) {
				Min.insert(1, "0");
			}
		}	
		else {
			Min = Max;
			reverse(Min.begin(), Min.end());
		}		
		cout << Min << " " << Max;		
	}
		
	return 0;
}
