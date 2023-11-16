//https://code.ptit.edu.vn/student/question/CPP0802
//Tinh tong
#include <bits/stdc++.h>
using namespace std;

int Tinh(string& s) {
	if (s.size() > 9)
		return 0;
	long long ans = 0;
	for (char i : s) {
		if(!isdigit(i))
			return 0;
		ans = ans*10 + i-'0';
	}
	if (ans <= 2147483647)
		return (int)ans;
	return 0;
}

int main() {
	ifstream in("DATA.in");
	ofstream out("DATA.out");
	string line;

	string str = "";
	long long ans = 0;
	
	while (getline(in, line)) {
		out << line << "\n";
		str += line + " ";
	}
	
	string token;
	stringstream ss(str);
	while (ss >> token) {
		ans += Tinh(token);
	}

	cout << ans << "\n";
	
	in.close();
	out.close();
	
	return 0;
}
