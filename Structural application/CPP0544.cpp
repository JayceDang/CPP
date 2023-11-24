#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238

struct Data {
	
	double x, y;
	
	void input() {
		cin >> x >> y;
	}
	
};

double dodai(Data A, Data B) {
	
	double distance = sqrt(pow(A.x-B.x, 2) + pow(A.y-B.y, 2));
	return distance;		
}

bool check(Data A, Data B, Data C) {
	
	if ((A.x - B.x) * (A.y - C.y) == (A.x - C.x) * (A.y - B.y)) 
		return 0;
    return 1;
    
}

int main () {
	
	int t;
	cin >> t;
	
	while (t--) {
		
		Data A, B, C;
		
	    A.input();
	    B.input();
	    C.input();
		
		if (!check(A, B, C)) {
			cout << "INVALID\n";

		} else {
			
			double a = dodai(B, C);
			double b = dodai(A, C);
			double c = dodai(A, B);
			
			double p = (a+b+c)/2;
			double S = sqrt(p * (p - a) * (p - b) * (p - c));

			double R = a*b*c/ (4 * S);
    		double res = PI*R*R;
			
			cout << fixed << setprecision(3) << res << "\n";
		
		}
		
	}
	
	return 0;
}
