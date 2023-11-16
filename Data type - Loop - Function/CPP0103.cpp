//https://code.ptit.edu.vn/student/question/CPP0103
//Tinh tong phan thuc - 1
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	double sum;
	
	for (double i = 1; i <= n; ++i) {
		sum += 1/i;
	}
	
	cout << fixed << setprecision(4) << sum;
	
	return 0;
}
