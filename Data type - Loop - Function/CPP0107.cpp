//https://code.ptit.edu.vn/student/question/CPP0107
//Cham diem trac nghiem
#include <bits/stdc++.h>
using namespace std;

int main () {
 	int t;
 	cin >> t;
 	
	int a[15] = {1,2,2,1,4,3,3,1,2,4,3,3,1,2,4};
 	int b[15] = {1,3,3,1,2,3,4,4,2,2,3,4,4,2,2};
 	
 	while (t--) {
 		int n;
 		cin >> n;
 		int c[15];
 		for (int i = 0; i < 15; ++i) {
 			char x;
 			cin >> x;
 			c[i] = x-'A' +1;
		}
		float d = 10;
		if (n == 101) {
		 	for (int i = 0 ; i < 15; ++i) {
		 		if (c[i] != a[i]) 
					d -= (float) 2/3;
			}
		}
		else {
		 	for (int i = 0; i < 15; ++i) {
		 		if (c[i] != b[i])
				 	d -= (float) 2/3;
			}
		}
		cout << fixed << setprecision(2) << d << endl;
	}
	return 0;
}
