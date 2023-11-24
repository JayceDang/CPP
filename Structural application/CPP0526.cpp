#include <bits/stdc++.h>
using namespace std;

class DanhSach {
	
	public:
		string name;
		string dateofbirth;
	
	friend istream& operator >> (istream& in, DanhSach& a) {
		in >> a.name >> a.dateofbirth;
		return in;
	}
	
};

bool cmp(DanhSach a, DanhSach b) {
	
	int ngay1, ngay2;
	int thang1, thang2;
	int nam1, nam2;
	
	string s = a.dateofbirth, w = b.dateofbirth;
	
	ngay1 = (s[0]-'0')*10 + (s[1]-'0');
	ngay2 = (w[0]-'0')*10 + (w[1]-'0');
	
	thang1 = (s[3]-'0')*10 + (s[4]-'0');
	thang2 = (w[3]-'0')*10 + (w[4]-'0');
	
	nam1 = stoi(s.substr(6));
	nam2 = stoi(w.substr(6));
	
	if (nam1 != nam2)
		return nam1 > nam2;
	if (thang1 != thang2)
		return thang1 > thang2;
	return ngay1 > ngay2;
	
}

int main() {
	int n;
	cin >> n;

	DanhSach ds[100];
	
	for (int i = 0; i < n; ++i) {
		cin >> ds[i];
	}
	
	sort(ds, ds+n, cmp);
	
	cout << ds[0].name << "\n" << ds[n-1].name << "\n";
	
	return 0;
}
