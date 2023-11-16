//https://code.ptit.edu.vn/student/question/CPP0213
//Kiem tra so Fibonacci
#include <bits/stdc++.h>
using namespace std;

long long f[100];

void init() {
	f[0] = 0;
	f[1] = 1;
	
	for (int i = 2; i <= 92; ++i) 
		f[i] = f[i-1]+f[i-2];
	
}

int check(long long n) {
	for (int i = 0; i <= 92; ++i) {
		if (f[i] == n)
			return 1;
	}
	return 0;
}

int main(){
	init();
	int t;
	cin >> t;
	
	while (t--) {
		long long n;
		cin >> n;
	
		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];
			
		for (int i = 0; i < n; ++i) {
			if (check(a[i]))
				cout << a[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
