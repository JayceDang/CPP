//https://code.ptit.edu.vn/student/question/CPP0626
//Danh sach giang vien theo bo mon
#include <bits/stdc++.h>
using namespace std;

int cntGv = 1;
class GiangVien {
	public:
		string ten;
		string bomon;
		string id = "GV";
		string fakebomon = "";
		
	friend istream& operator >> (istream& in, GiangVien& a) {
		scanf("\n");
		getline(in, a.ten);
		getline(in, a.bomon);
		
		stringstream ss(a.bomon);
		string token;
		while (ss >> token) {
			a.fakebomon += toupper(token[0]);
		}
		
		if (cntGv < 10)
			a.id += "0" + to_string(cntGv++);
		else
			a.id += to_string(cntGv++);
		
		return in;
	}
	
	friend ostream& operator << (ostream& out, GiangVien a) {
		out << a.id << " " << a.ten << " " << a.fakebomon << "\n";
		return out;
	}
	
};

int main() {
	
	int n;
	cin >> n;
	GiangVien a[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
		
	int q;
	cin >> q;
	cin.ignore();
	while (q--) {	
		string s, token, res = "";
        getline(cin, s);
        stringstream ss(s);
        while (ss >> token) {
            res += toupper(token[0]);
        }
		
		cout << "DANH SACH GIANG VIEN BO MON " << res << ":\n";
		for (int i = 0; i < n; ++i) {
			if (res == a[i].fakebomon)
				cout << a[i];
		}
	}
	
	return 0;
}
