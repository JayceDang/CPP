#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, cnt = 0;
		cin >> n;
		
		//Array set(n)
		set<int> a[n];
		
		//**
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				int x;
				cin >> x;
				a[i].insert(x);
			}
		}

//	**		
//		for (int i = 0; i < n; ++i) {
//			for (auto it = a[i].begin(); it != a[i].end(); ++it) {
//				cout << *it << " ";
//			}
//			cout << "\n";
//		}		
		
		for (auto i : a[0]) {
			bool check = true;
			
			//Tim tu hang thu 2
			for (int j = 1; j < n; ++j) {
				//Khong tim thay
				if(a[j].find(i) == a[j].end()) {
					check = false;
					break;
				}
			}
			
			if (check)
				++cnt;
		}
		
		cout << cnt << "\n";	
	}
	
	return 0;
}
