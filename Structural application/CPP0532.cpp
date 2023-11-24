#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
  		cin >> n;

  		double x[n], y[n];
  		for (int i = 0; i < n; i++) {
    		cin >> x[i] >> y[i];
  		}		

  		double S = 0;
  		for (int i = 0; i < n; i++) {
    		S += (x[i] * y[(i + 1) % n] - x[(i + 1) % n] * y[i]);
  		}

  		cout << fixed << setprecision(3) << S / 2 << endl;
		
	}

	return 0;
}

