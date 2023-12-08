#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		long long n, m;
		cin >> n >> m;
		int a[100001], b[100001];
		vector<int> v;
		
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			v.push_back(a[i]);
		}		
			
		for (int j = 0; j < m; ++j) {
			cin >> b[j];
			v.push_back(b[j]);
		}
			
		sort(v.begin(), v.end());	
			
		for (int i = 0; i < v.size(); ++i)
			cout << v[i] << " ";
		cout << "\n";
	}

	return 0;
}
