//https://code.ptit.edu.vn/student/question/CPP0621
//Sap xep theo ma sinh vien
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	public:
		string masv;
		string ten;
		string lop;
		string email;
	
	friend istream& operator >> (istream& in, SinhVien& a) {
		scanf("\n");		
		getline(in, a.masv);
		getline(in, a.ten);
		getline(in, a.lop);
		getline(in, a.email);
		
		return in;
	}
	
	friend ostream& operator << (ostream& out, SinhVien a) {
		out << a.masv << " " << a.ten << " " << a.lop << " " << a.email << "\n";		
		return out;
	}
	
}; 

bool cmp(SinhVien a, SinhVien b) {
	return a.masv < b.masv;
}

int main() {
    int n = 0;
    SinhVien a[1000], x;
    while (cin >> x) {
        a[n++] = x;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i];
    }
    return 0;
}
