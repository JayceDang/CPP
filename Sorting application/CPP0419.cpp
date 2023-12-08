#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;
		
		int a[n], b[m];
		
		for (int i = 0; i < n; ++i)
			cin >> a[i];
			
		for (int i = 0; i < m; ++i)
			cin >> b[i];
		
			sort(a, a+n);
			sort(b, b+m);
		
		vector<int> v(m+n);
		auto it1 = set_union(a, a+n, b, b+m, v.begin());
		v.resize(it1-v.begin());
			
		for (int x : v)
			cout << x << " ";				
		cout << "\n";
			
		vector<int> w(m+n);
		auto it3 = set_intersection(a, a+n, b, b+m, w.begin());
		w.resize(it3-w.begin());
			
		for (int x : w) 
			cout << x << " ";
		cout << "\n";
	}

	return 0;
}
