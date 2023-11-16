//https://code.ptit.edu.vn/student/question/CPP0121
//Uoc so chung boi so chung
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		long long a, b;
		cin >> a >> b;
		
		long long Bc = a*b/__gcd(a, b);
		
		cout << Bc << " " << __gcd(a, b) << "\n";
	}

	return 0;
}

