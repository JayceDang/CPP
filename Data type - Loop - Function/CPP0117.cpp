//https://code.ptit.edu.vn/student/question/CPP0117
//Tinh tong chu so
#include <bits/stdc++.h>
using namespace std;

int Tinhtong(int n) {
	if (n < 10)
		return n;
	int sum = 0;
	while (n > 0) {
		int x = n % 10;
		sum += x;
		n /= 10;
	}
	return Tinhtong(sum);
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
	
		cout << Tinhtong(n) << "\n";
	}

	return 0;
}

