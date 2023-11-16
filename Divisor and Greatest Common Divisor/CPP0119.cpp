//https://code.ptit.edu.vn/student/question/CPP0119
//Uoc so chia het cho 2
#include <bits/stdc++.h>
using namespace std;

int check(int n) {
	int sum = 0, cnt = 0;
	
	vector<int> v;
	
	for (int i = 1; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			if (i != n/i) {
				v.push_back(i);
				v.push_back(n/i);			
			} 
			else {
				v.push_back(i);
			}			
		}
	}
	for (int i = 0; i < v.size(); ++i)
		if (v[i] % 2 == 0)
			++cnt;
	return cnt;
}

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		cout << check(n) << "\n";
	}

	return 0;
}
