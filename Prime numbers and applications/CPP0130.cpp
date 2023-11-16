//https://code.ptit.edu.vn/student/question/CPP0130
//Uoc so nguyen to
#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i ==0)
			return 0;
	return n > 1;		
}

int main(){
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		
		if (prime(n))
			cout << n;
		else {
				
		for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0)
				while (n % i == 0) {
					cout << i << " ";
					n /= i;
				}		
			}
		
		if (n > 1)
			cout << n;
		}
		cout << "\n";
	}

	return 0;
}
