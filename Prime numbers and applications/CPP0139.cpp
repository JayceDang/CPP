//https://code.ptit.edu.vn/student/question/CPP0139
//So Smith
#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0)
			return 0;
	}
	return n>1;
}

int tongcs(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n /= 10;
	}	
	return sum;
}

bool check(int n) {
	int sum = 0;
	int m = n;			
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			while (n % i == 0) {
				sum += tongcs(i);
				n /= i;
			}
		}
	}
	
	if (n > 1)
		sum += tongcs(n);
		
	if (tongcs(m) == sum)
		return true;
	return false;	
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		if (check(n) && !prime(n))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}

	return 0;
}
