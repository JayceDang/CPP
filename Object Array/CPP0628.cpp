//https://code.ptit.edu.vn/student/question/CPP0628
//Danh sach doanh nghiep nhan sinh vien thuc tap - 1
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class DoanhNghiep {
	public:
		string id;
		string ten;
		int soluong;
	
	friend istream& operator >> (istream& in, DoanhNghiep& a) {
		scanf("\n");
		getline(in, a.id);
		getline(in, a.ten);
		in >> a.soluong;
		return in;
	}
	
	friend ostream& operator << (ostream& out, DoanhNghiep a) {
		out << a.id << " " << a.ten << " " << a.soluong << "\n";
		return out;
	}
	
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {

	if (a.soluong == b.soluong) {
		return a.id < b.id;
	}
	return a.soluong > b.soluong;
}

int main(){
	
	int n;
	cin >> n;
	
	DoanhNghiep ds[n+1];
	
	for (int i = 0; i < n; ++i) {
		cin >> ds[i];
	}
	
	sort(ds, ds+n, cmp);
	
	for (int i = 0; i < n; ++i) {
		cout << ds[i];
	}
	
	return 0;
}
