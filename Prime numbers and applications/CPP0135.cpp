//https://code.ptit.edu.vn/student/question/CPP0135
//Liet ke so co ba uoc so
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
		int n;
		cin >> n;
		
		for (int i = 4; i <= n; ++i) {
			if (sqrt(i)-(int)sqrt(i) == 0 && prime(sqrt(i)))
				cout << i << " ";
		}
		cout << "\n";
	}

	return 0;
}
