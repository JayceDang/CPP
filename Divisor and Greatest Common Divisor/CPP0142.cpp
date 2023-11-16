//https://code.ptit.edu.vn/student/question/CPP0142
//Nguyen to cung nhau
#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int x, cnt = 0;
		cin >> x;
		
		for (int i = 1; i <= x; ++i) {
			if (__gcd(i, x) == 1)
				++cnt;
		}
		
		if (prime(cnt))
			cout << "1\n";
		else 
			cout << "0\n";
	}

	return 0;
}
