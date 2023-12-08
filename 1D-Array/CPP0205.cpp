#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		vector<int> v;
		
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		
		long long max = 1;		
		for (int i = 0; i < v.size(); ++i) {
			if (v[i] > max)
				max = v[i];
		}
		cout << max << "\n";
	}

	return 0;
}
