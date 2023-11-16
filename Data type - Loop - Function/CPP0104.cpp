//https://code.ptit.edu.vn/student/question/CPP0104
//Tinh tong giai thua
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	long long sum = 0, gt = 1;
	
	for (int i = 1; i <= n; ++i) {
		gt *= i;
		sum += gt;
	}
	
	cout << sum;
	
	return 0;
}


