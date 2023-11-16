//https://code.ptit.edu.vn/student/question/CPP0181
//So lap lai
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		ll a, x, y;
		cin >> a >> x >> y;
		
		for (int i = 1; i <= __gcd(x, y); ++i) {
			cout << a; 
		}
		cout << "\n";
	}

	return 0;
}

