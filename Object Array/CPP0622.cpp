//https://code.ptit.edu.vn/student/question/CPP0622
//Liet ke sinh vien theo lop
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	public:
		string masv;
		string ten;
		string lop;
		string email;
	
	friend istream& operator >> (istream& is, SinhVien& a) {		
		getline(is, a.masv);
		getline(is, a.ten);
		getline(is, a.lop);
		getline(is, a.email);
		
		return is;
	}
	
	friend ostream& operator << (ostream& os, SinhVien a) {
		cout << a.masv << " " << a.ten << " " << a.lop << " " << a.email << "\n";		
		return os;
	}
	
}; 

int main() {
	int n;
	cin >> n;
	
	SinhVien sv[n];
	cin.ignore();
	for (int i = 0; i < n; ++i) {
		cin >> sv[i];
	}
	
	int q;
	cin >> q;
	
	while (q--) {
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for (int i = 0; i < n; ++i) {
			if (sv[i].lop == s)
				cout << sv[i];
		}
	}
	
	return 0;
}
