//https://code.ptit.edu.vn/student/question/CPP0122
//Uoc chung lon nhat cua n so nguyen duong dau tien
#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
	return a*b/__gcd(a, b);
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		long long n;
		cin >> n;
		
		long long Gcd = 1;
		
		for (int i = 1; i <= n; ++i) {
			Gcd = lcm(i, Gcd);
		}
		
		cout << Gcd << "\n";
	}

	return 0;
}
