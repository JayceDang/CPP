//https://code.ptit.edu.vn/student/question/CPP0131
//Uoc so nguyen to nho nhat
#include <bits/stdc++.h>
using namespace std;

int prime(long long n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int Uocntnn(int n) {
	int sum = 0;
	
	if (prime(n))
		return n;
	
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			sum += i;
			break;
		}
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		for (int i = 1; i <= n; ++i) {
			if (i == 1)
				cout << "1 ";
			else 
				cout << Uocntnn(i) << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
