//https://code.ptit.edu.vn/student/question/CPP0629
//Danh sach doanh nghiep nhan sinh vien thuc tap - 2
#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep {
	private:
		string maDn;
		string tenDn;
		int soLuong;
		
	public:
		friend istream& operator >> (istream& in, DoanhNghiep& a) {
			in >> a.maDn;
			
			in.ignore();
			getline(in, a.tenDn);
			in >> a.soLuong;
			
			return in;
		}
		
		friend ostream& operator << (ostream& out, DoanhNghiep a) {
			out << a.maDn << " " << a.tenDn << " " << a.soLuong << "\n";			 
			return out;
		}
		
		int getsoLuong() {
			return this->soLuong;
		}
		
		string getmaDn() {
			return this-> maDn;
		}
		
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {
	if (a.getsoLuong() == b.getsoLuong())
		return a.getmaDn() < b.getmaDn();
	return a.getsoLuong() > b.getsoLuong();
}

int main() {
	
	int n;
	cin >> n;
	
	DoanhNghiep ds[n];
	cin.ignore();
	for (int i = 0; i < n; ++i) {
		cin >> ds[i];
	}
	sort(ds, ds+n, cmp);
	
	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
	
		for (int i = 0; i < n; ++i) {
			if (ds[i].getsoLuong() >= l && ds[i].getsoLuong() <= r)
				cout << ds[i];
		}
		cout << "\n";
	}
	
	return 0;
}
