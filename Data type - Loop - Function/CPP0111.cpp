//https://code.ptit.edu.vn/student/question/CPP0111
//So lien ke
include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		
		int ok = 1;
		
		for (int i = 0; i < s.size()-1; ++i) {
			if (abs((s[i]-'0') - (s[i+1]-'0')) != 1) {
				ok = 0;
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
