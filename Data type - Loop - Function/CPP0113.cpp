//https://code.ptit.edu.vn/student/question/CPP0113
//So may man
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		long long n;
		cin >> n;
		
		if (n % 100 == 86) 
			cout << "1\n";
		else 
			cout << "0\n";
	}

	return 0;
}
