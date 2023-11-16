//https://code.ptit.edu.vn/student/question/CPP0132
//Uoc so nguyen to lon nhat
#include <bits/stdc++.h>
using namespace std;

int prime(long long n) {
	for (int i = 2; i <= sqrt(n); ++i)
		if (n % i == 0)
			return 0;
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		long long n;
		cin >> n;
		
		vector<long long> v;
		
		if (prime(n))
			cout << n ;
		else {
			for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0)
				while (n % i == 0) {
					v.push_back(i);
					n /= i;
				}		
			}
		
			if (n > 1)
				v.push_back(n);
			
			if (v.size())
			    cout << v[v.size()-1];
		}	
		cout << "\n";
	}

	return 0;
}

