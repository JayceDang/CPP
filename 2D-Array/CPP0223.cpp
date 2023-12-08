#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				cin >> a[i][j];
		}
		
		int top = 0, l = 0;
		int bot =  n-1, r = m-1; 
		
		while (top <= bot && l <= r) {
			
			for (int i = l; i <= r; ++i) {
				cout << a[top][i] << " ";
			}
			++top;	
			
			for (int i = top; i <= bot; ++i) {
				cout << a[i][r] << " ";
			}
			--r;
			
			if (top <= bot) {
				for (int i = r; i >= l; --i) {
					cout << a[bot][i] << " ";
				}
				--bot;
			}
			
			if (l <= r) {
				for (int i = bot; i >= top; --i) {
					cout << a[i][l] << " ";
				}
				++l;
			}
					
		}
	
		cout << "\n";
	}

	return 0;
}


