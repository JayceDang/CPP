#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string &s) {
	
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); ++i) {	
		s[i] = tolower(s[i]);
	}
	return s;	
}

int main(){
	string s;
	string token;
	getline(cin, s);
	
	stringstream ss(s);
	
	vector<string> v;
	
	while (ss >> token) {
		v.push_back(token);
	}
	
	for (int i = 0; i < v.size()-1; ++i) {
		chuanhoa(v[i]);
		cout << v[i];
		if (i == v.size()-2)
			cout << ", ";
		else 
			cout << " ";
	}
	
	string temp = v[v.size()-1];
	for (int i = 0; i < temp.size(); ++i) {
		temp[i] = toupper(temp[i]);
	}
	cout << temp;

	return 0;
}
