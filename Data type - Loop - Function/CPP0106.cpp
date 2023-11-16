//https://code.ptit.edu.vn/student/question/CPP0106
//So thuan nghich
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--) {
		string n;
		cin >> n;
		
		int ok = 1, d = 0, c = n.size()-1;
		while (d < c) {
			if (n[d] == n[c]) {
				++d;
				--c;
			} else {
				ok = 0; //Dat co lenh
				break;
			}			
		}
		
		if (ok == 1) 
			cout << "YES\n";
		else 
			cout << "NO\n";
		
	}

	return 0;
}
