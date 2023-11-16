//https://code.ptit.edu.vn/student/question/CPP0143
//So Fibonacci thu n
#include <bits/stdc++.h>
using namespace std;

long long f[100];

void sieve() {
	f[0] = 0;
	f[1] = 1;
	
	for (int i = 2; i <= 92; ++i)
		f[i] = f[i-2] + f[i-1];
	
}
int main(){
	int t;
	cin >> t;
	sieve();
	while (t--) {	
		int n;
		cin >> n;
		
		cout << f[n] << "\n";
	}
	
	return 0;
}
