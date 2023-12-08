#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		long long n, m;
		cin >> n >> m;
		int a[100001], b[100001];
		
		for (int i = 0; i < n; ++i)
			cin >> a[i];
			
		for (int j = 0; j < m; ++j)
			cin >> b[j];		
		
		long long maxA = -1e8;
		long long minB = 1e8;
		
		for (int i = 0; i < n; ++i) {
			if (a[i] > maxA)
				maxA = a[i];
		}
		
		for (int i = 0; i < m; ++i) {
			if (b[i] < minB)
				minB = b[i];
		}
		
		cout << maxA*minB << "\n";
	}

	return 0;
}
