//https://code.ptit.edu.vn/student/question/CPP0625
//Sap xep danh sach giang vien
#include <bits/stdc++.h>
using namespace std;

int stt = 1;

class GiangVien {
	public:
		string ten;
		string khoa;
		string id = "GV";
		string lastname = "";
		string ChuanHoa = "";
	
	friend istream& operator >> (istream& in, GiangVien& a) {
		getline(cin, a.ten);
		string temp;
		stringstream sw(a.ten);
		vector<string> v;
		
		while (sw >> temp) {
			v.push_back(temp);
		}
		a.lastname += v[v.size()-1];
		
		getline(cin, a.khoa);
		
		string token;
		stringstream ss(a.khoa);
		
		while (ss >> token) {
			a.ChuanHoa += toupper(token[0]);
		}
		
		if (stt < 10) 
			a.id += "0" + to_string(stt++);
		else
			a.id += to_string(stt++);
		return in;
	}
	
	friend ostream& operator << (ostream& out, GiangVien a) {
		out << a.id << " " << a.ten << " " << a.ChuanHoa << "\n";
		return out;
	}
	
};

bool cmp(GiangVien& a, GiangVien& b) {
	if (a.lastname == b.lastname)
		return a.id < b.id;
	return a.lastname < b.lastname;
} 

int main() {
	int n;
	cin >> n;
	
	GiangVien gv[n];
	cin.ignore();
	
	for (int i = 0; i < n; ++i) {
		cin >> gv[i];
	}
	
	sort(gv, gv+n, cmp);
	
	for (int i = 0; i < n; ++i) {
		cout << gv[i];
	}

	return 0;
}
