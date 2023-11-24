//https://code.ptit.edu.vn/student/question/CPP0243
//Sap dat hai day so
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& v, int x) {
    return find(v.begin(), v.end(), x) != v.end();
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;
		
		vector<int> v1, v2, v;
		map<int, int> mp;
		
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			v1.push_back(x);
		}
		
		for (int i = 0; i < m; ++i) {
			int x;
			cin >> x;
			v2.push_back(x);
		}
		
		for (int i = 0; i < v2.size(); ++i) {
			for (int j = 0; j < v1.size(); ++j) {
				if (check(v2, v1[j])) {
					mp[v1[j]]++;
					cout << v1[j] << " ";
				}
			}
		}
		
//		vector<int> vi;
//		for (int i = 0; i < v1.size(); ++i) {
//			if (mp[v[i]] != 0) {
//				vi.push_back(v[i]);
//			}
//		}
//		
//		for (auto x : vi) {
//			cout << x << " ";
//		}
		
	}

	return 0;
}

