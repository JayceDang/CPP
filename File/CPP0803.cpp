//https://code.ptit.edu.vn/student/question/CPP0803
//So khac nhau trong file
#include <bits/stdc++.h>
using namespace std;

int So(string& s) {
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
	ifstream in("DATA2.in");
	ofstream out("DATA2.out");
	
	string line;
	map<int, int> mp;
	
	string str = "";
	
	while (getline(in, line)) {
		out << line << "\n";
		str += line + " ";
	}
	
	string token;
	stringstream ss(str);
	while (ss >> token) {
		mp[So(token)]++;
	}
	
	for (auto& x : mp) {
		cout << x.first << " " << x.second << "\n";
	}
	
	in.close();
	out.close();
	
	return 0;
}
