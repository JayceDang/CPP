//https://code.ptit.edu.vn/student/question/CPP0133
//Uoc so nguyen to nho hon n
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
		
		for (int i = 2; i <= n; ++i) {
			if (prime(i))
				cout << i << " ";
		}
	}
	
	return 0;
}
