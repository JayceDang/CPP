#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int a[n+1];

        for (int i = 0; i < n; ++i) {
        	cin >> a[i];
		}

		long long res = 0, pow = 1;
		
		for (int i = n-1; i >= 0; i--) {
			res = (res + pow*a[i]) % mod;
			pow = pow*x % mod;
		}
	
        cout << res << "\n";
    }

    return 0;
}
