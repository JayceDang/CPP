//https://code.ptit.edu.vn/student/question/CPP0118
//So Sphenic
#include <bits/stdc++.h>
using namespace std;

int check(int n) {
	int cnt = 0;
	
	set<int> S;
	
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			while (n % i == 0) {
				++cnt;
				S.insert(i);
				n /= i;
			}
		}
	}
	
	if (n > 1) {
		++cnt;
		S.insert(n);
	}
	
	if (cnt == 3 && S.size() == 3) 
		return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;

	while (t--) {
		int n; 
		cin >> n;
		
		if (check(n))
			cout << "1\n";
		else 
			cout << "0\n";
	}

	return 0;
}
