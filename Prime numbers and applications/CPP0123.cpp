//https://code.ptit.edu.vn/student/question/CPP0123
//Kiem tra nguyen to
#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i ==0)
			return 0;
	return n > 1;
}

int main(){
	long long n;
	cin >> n;
	if (prime(n))
		cout << "YES\n";
	else 
		cout << "NO\n";

	return 0;
}
