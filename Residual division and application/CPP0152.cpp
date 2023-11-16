//https://code.ptit.edu.vn/student/question/CPP0152
//Chia du
#include<bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int a,m;
		cin >> a >> m;
		int check =0;
		for (int i =0; i<= m-1; i++) {
			if ((i*a) % m == 1) {
				cout << i << endl;
				check =1;
				break;
			}
		}
		if (check == 0) 
			cout << "-1\n";
	}
	return 0;
}
