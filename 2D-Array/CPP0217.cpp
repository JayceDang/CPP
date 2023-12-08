#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n, k;
		cin >> n >> k;
		
		vector<int> v;
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				int x;
				cin >> x;
				v.push_back(x);
			}
		}	
				
		sort(v.begin(), v.end());
		
		cout << v[k-1] << "\n";
	}

	return 0;
}
