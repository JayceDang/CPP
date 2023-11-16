//https://code.ptit.edu.vn/student/question/CPP0108
//So tang giam
#include <bits/stdc++.h>
using namespace std;

int tang(long long n) {
	while (n > 9) {
		if ((n%10) <= (n/10)%10)
			return 0;
		n /= 10;
	}
	return 1;
}

int giam(long long n) {
	while (n > 9) {
		if ((n%10) >= (n/10)%10)
			return 0;
		n /= 10;
	}
	return 1;
}

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
		int n, cnt = 0;
		cin >> n;
	
		for (int i = pow(10, n-1); i < pow(10, n); ++i) {
			if (tang(i) || giam(i)) {
				if (prime(i)) {
					++cnt;
				}
			}
		}	
		cout << "\n" <<cnt;
	}

	return 0;
}
