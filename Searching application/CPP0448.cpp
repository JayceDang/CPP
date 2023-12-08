#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n, x;
		cin >> n >> x;
		
		int cnt = 0;
		
		for (int i = 0; i < n; ++i) {
			int k;
			cin >> k;
			
			if (k == x)
				++cnt;
			
		}
		
		if (cnt == 0) 
			cout << "-1\n";
		else 
			cout << cnt << "\n";
	}

	return 0;
}
