//https://code.ptit.edu.vn/student/question/CPP0745
//Tinh so fibonacci lon
#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

long long Fibo[1001];

void BigFibo() {
	memset(Fibo, 0, sizeof(Fibo));
	Fibo[1] = 1;
	
	for (int i = 2; i <= 1000; ++i) {
		Fibo[i] = (Fibo[i-1] % mod + Fibo[i-2] % mod) % mod;
	}
}

int main() {
	int t;
	cin >> t;
	BigFibo();
	
	while (t--) {
		int n;
		cin >> n;
		cout << Fibo[n];
		
		cout << "\n";
	}
	
	return 0;
}
