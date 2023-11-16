//https://code.ptit.edu.vn/student/question/CPP0125
//Liet ke so nguyen to - 1
#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i ==0)
			return 0;
	return n > 1;
}

int main(){

	long long a, b;
	cin >> a >> b;
	
	if (a > b)
		swap(a, b);
	
	for (int i = a; i <= b; ++i) {
		if (prime(i))
			cout << i << " ";
	}

	return 0;
}
