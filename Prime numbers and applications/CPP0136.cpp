//https://code.ptit.edu.vn/student/question/CPP0136
//Dem so co ba uoc so
#include <bits/stdc++.h>
using namespace std;

int prime(long long n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		ll n;
		cin >> n;
		int cnt = 0;
		
		for (int i = 2; i <= sqrt(n); ++i) {
			if (prime(i) && pow(i, 2) <= n) {
				++cnt;
			}			
		}
			
		cout << cnt << "\n";
	}

	return 0;
}
