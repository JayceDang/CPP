#include <bits/stdc++.h>
using namespace std;

long long f[100];

void sieve() {
	f[0] = 0;
	f[1] = 1;
	
	for (int i = 2; i <= 92; ++i)
		f[i] = f[i-2] + f[i-1];
	
}

int main(){
	int t;
	cin >> t;
	sieve();
	while (t--) {
	
		long long n, ok = 0;
		cin >> n;
			
		for (int i = 0; i <= 92; ++i) {
			if (f[i] == n)
				ok = 1;
		}
		
		if (ok == 1)
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	
	return 0;
}
