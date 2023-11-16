//https://code.ptit.edu.vn/student/question/CPP0127
//Cap so nguyen to co tong bang N
#include <bits/stdc++.h>
using namespace std;

vector<bool> v(1e6 + 1, 1);
void eratosthenes() {
    v[0] = v[1] = 0;
    for (int i = 2; i <= 1000; ++i) {
        if (v[i]) {
            for (int j = i * i; j <= 1e6; j += i)
                v[j] = 0;
        }
    }
}

int main(){
	eratosthenes();
	int t;
	cin >> t;
	
	while (t--) {
		int n, ok = 1;
		cin >> n;
		
		for (int i = 2; i <= n/2; ++i) {
			if (v[i] && v[n-i]) {
				cout << i << " " << n-i << "\n";
				return;
			} else {
				ok = 0;
			}
		}
		if (ok == 0)
			cout << "-1\n";
	}

	return 0;
}

