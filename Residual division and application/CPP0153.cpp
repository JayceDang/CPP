//https://code.ptit.edu.vn/student/question/CPP0153
//Chia du tu 1 den N
#include<bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		long long n,k;
		cin >> n >> k;
		long long sum=0;
		for (int i=1; i<= n; i++) {
			sum += i%k;
		}
		cout << sum << endl;
	}
	return 0;
}
