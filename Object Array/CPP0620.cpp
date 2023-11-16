//https://code.ptit.edu.vn/student/question/CPP0620
//Sap xep sinh vien theo lop
#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	
	public:
		string masv;
		string ten;
		string lop;
		string email;
	
	friend istream& operator >> (istream& is, SinhVien& a);
	friend ostream& operator >> (ostream& os, SinhVien a);

};

istream& operator >> (istream& in, SinhVien& a) {
	
	in >> a.masv;
	
	cin.ignore();
	getline(in, a.ten);
	
	in >> a.lop >> a.email;
	
	return in;
}

ostream& operator << (ostream& out, SinhVien a) {
	out << a.masv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
	return out;
}

bool cmp(SinhVien a, SinhVien b) {
	if (a.lop != b.lop)
		return a.lop < b.lop;
	return a.masv < b.masv;
}

int main(){   
    int N, i;
    cin >> N;
	SinhVien ds[1001];
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sort(ds, ds+N, cmp);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
