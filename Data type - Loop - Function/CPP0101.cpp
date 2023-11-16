//https://code.ptit.edu.vn/student/question/CPP0101
//Tinh tong 1 den n
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, sum = 0;
		cin >> n;
		
		sum = n*(n+1)/2;
		
		cout << sum << "\n";
	}

	return 0;
}
