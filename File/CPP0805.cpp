//https://code.ptit.edu.vn/student/question/CPP0805
//Giao va hop cua hai file van ban
#include <bits/stdc++.h>
using namespace std;

set<string> converst(string s) {
	stringstream ss(s);
	set<string> se;
	string token;
	
	while (ss >> token) {
		se.insert(token);
	}
	return se;
}

int main() {
	ifstream in1("DATA3.in");
	ifstream in2("DATA4.in");
	
	ofstream out("PTIT.out");
	
	string ans1 = "";
  	string line1;
  	while (getline(in1, line1)) {
  		for (int i = 0; i < line1.size(); ++i)
  			line1[i] = tolower(line1[i]);
    	out << line1 << endl;
    	ans1 += line1 + " ";
  	}
  	
  	string ans2 = "";
  	string line2;
  	while (getline(in2, line2)) {
  		for (int i = 0; i < line2.size(); ++i)
  			line2[i] = tolower(line2[i]);
    	out << line2 << endl;
    	ans2 += line2 + " ";
  	}
  	
  	set<string> s;
  	string token1, token2;
  	stringstream ss(ans1);
  	stringstream sw(ans2);
  	while (ss >> token1) {
  		s.insert(token1);
	}
  	while (sw >> token2) {
  		s.insert(token2);
	}
	
	for (auto x : s)	
		cout << x << " ";
	
	cout << "\n";
	
	set<string> se1 = converst(ans1);
	set<string> se2 = converst(ans2);
	
	for (string x : se1) {
		if (se2.find(x) != se2.end()) {
			cout << x << " ";
		}
	}
	
	in1.close();
	in2.close();
	out.close();
	
	return 0;
}
