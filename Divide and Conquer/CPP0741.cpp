//https://code.ptit.edu.vn/student/question/CPP0741
//Tich luy thua
#include <bits/stdc++.h>
using namespace std;

int main() {	
	int t;
	cin >> t;
	
	while (t--) {
		int x, y, p;
		cin >> x >> y >> p;
		long long res = 1;
		for (int i = 1; i<= y; i++) {
		    res= res * x % p;
		}
		
		cout << res << "\n";
	}

	return 0;
}
