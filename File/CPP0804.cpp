//https://code.ptit.edu.vn/student/question/CPP0804
//Liet ke tu khac nhau
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ifstream in("VANBAN.in");
	ofstream out("VANBAN.out");
	
	string line;
	string str = "";
	while (getline(in, line)) {
		out << line << "\n";
		str += line + " ";
	}
	
	set<string> st;
	string token;
	stringstream ss(str);
	while (ss >> token) {
		for (int i = 0; i < token.size(); ++i) {
			token[i] = tolower(token[i]);
		}
		st.insert(token);
	}
	
	for (auto x : st) {
		cout << x << "\n";
	}
	 	
	in.close();
	out.close();
	
	return 0;
}

