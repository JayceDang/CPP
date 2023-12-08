#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, w, tmp;
	getline(cin, s);
	cin >> w;
	stringstream ss(s);
	
	while (ss >> tmp) {
		if (tmp != w)
			cout << tmp << " ";
	}

	return 0;
}
