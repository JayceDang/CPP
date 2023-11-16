//https://code.ptit.edu.vn/student/question/CPP0627
//Tim kiem giang vien
#include <bits/stdc++.h>
using namespace std;

int cntGv = 1;
class GiangVien {
	public:
		string ten;
		string bomon;
		string id = "GV";
		string fakename = "";
		
	friend istream& operator >> (istream& in, GiangVien& a) {
		scanf("\n");
		getline(in, a.ten);
		getline(in, a.bomon);
		
		for (int i = 0; i < a.ten.size(); ++i) {
			a.fakename += tolower(a.ten[i]);
		}
		
		string token, res = "";
        stringstream ss(a.bomon);
        while (ss >> token) {
            res += toupper(token[0]);
        }
        a.bomon = res;
		
		if (cntGv < 10)
			a.id += "0" + to_string(cntGv++);
		else
			a.id += to_string(cntGv++);
		
		return in;
	}
	
	friend ostream& operator << (ostream& out, GiangVien a) {
		out << a.id << " " << a.ten << " " << a.bomon << "\n";
		return out;
	}
	
};

bool checkFind(string a, string b) {
	return (b.find(a) != -1);
}

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
		string s;
		getline(cin, s);
		
		string w = s;
		for (int i = 0; i < w.size(); ++i) {
			w[i] = tolower(w[i]);
		}
		
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for (int i = 0; i < n; ++i) {
			if (checkFind(w, a[i].fakename))
				cout << a[i];	
		}	
	}
	
	return 0;
}
