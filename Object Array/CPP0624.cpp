//https://code.ptit.edu.vn/student/question/CPP0624
//Liet ke sinh vien theo nganh
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	public:
		string id;
		string ten;
		string lop;
		string email;
		string nganh = "";
		
	friend istream& operator >> (istream& in, SinhVien& a) {
		in >> a.id;
		in.ignore();
		
		getline(in, a.ten);
		in >> a.lop >> a.email;
		
		a.nganh = a.id.substr(3, 4); //Lay tu chi so thu 3, 4don vi
		
		return in;
	}
	
	friend ostream& operator << (ostream& out, SinhVien a) {
		out << a.id << " " << a.ten << " " << a.lop << " " << a.email << "\n";
		return out;
	}
	
};

string major(string s) {
	
	if (s == "Cong nghe thong tin")
		return "CN";
	if (s == "An toan thong tin")
		return "AT";
	if (s == "Dien tu")
		return "DT";
	if (s == "Vien thong")
		return "VT";
	if (s == "Ke toan")
		return "KT";
}

int main() {
	int n;
	cin >> n;
	
	SinhVien a[n];
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
		s = major(s);
		for (int i = 0; i < w.size(); ++i)
			w[i] = toupper(w[i]);
		
		cout << "DANH SACH SINH VIEN NGANH " << w << ":\n";
		
		for (int i = 0; i < n; ++i) {
			if (s == "CN" || s == "AT") {
                if (a[i].id[5] == s[0] && a[i].id[6] == s[1] && a[i].lop[0] != 'E')
                    cout << a[i];
            }
            else {
                if (a[i].id[5] == s[0] && a[i].id[6] == s[1])
                    cout << a[i];
            }
		}
		cout << "\n";
	}
	
	return 0;
}
