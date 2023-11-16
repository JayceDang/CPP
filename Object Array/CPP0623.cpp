//https://code.ptit.edu.vn/student/question/CPP0623
//Liet ke sinh vien theo khoa
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	public:
		string masv;
		string ten;
		string lop;
		string email;
		string tmp = "";
	
	friend istream& operator >> (istream& is, SinhVien& a) {		
		getline(is, a.masv);
		getline(is, a.ten);
		getline(is, a.lop);
		getline(is, a.email);
		
		a.tmp = "20" + a.lop[1] + a.lop[2];
		
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
		string w;
		cin >> w;
		cout << "DANH SACH SINH VIEN KHOA " << w << ":\n";	
		string tmp = w.substr(2, 3);	
		
		for (int i = 0; i < n; ++i) {
			if (sv[i].lop.substr(1, 2) == tmp)
				cout << sv[i];
		}
	}
		
	return 0;
}
