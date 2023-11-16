//https://code.ptit.edu.vn/student/question/CPP0137
//Liet ke so co ba uoc so trong khoang
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
		long long l, r;
		cin >> l >> r;
		int cnt = 0;
		
		for (int i = sqrt(l); i <= sqrt(r); ++i) {
			if (prime(i) && pow(i, 2) <= r) {
				++cnt;
			}			
		}
			
		cout << cnt << "\n";
	}

	return 0;
}
