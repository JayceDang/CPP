//https://code.ptit.edu.vn/student/question/CPP0112
//Khoang cach
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		double x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		double s = (double)1*sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
		
		cout << fixed << setprecision(4) << s << "\n";
		
	}
	
	return 0;
}
