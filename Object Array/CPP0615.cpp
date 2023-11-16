//https://code.ptit.edu.vn/student/question/CPP0615
//Sap xep danh sach doi tuong nhan vien
#include <bits/stdc++.h>
using namespace std;

int stt = 1;
	
class NhanVien {
		
	public:
		string id;
		string ten;
		string gioitinh;
		string ngaysinh;
		string diachi;
		string fax;
		string ngaykyhopdong;
		
		friend istream& operator >> (istream& is, NhanVien &a) {
			string s = to_string(stt++);
			while (s.size() < 5) {
				s = '0' + s;
			}
			
			a.id = s;
			
			cin.ignore();
			getline(is, a.ten);
			getline(is, a.gioitinh);
			getline(is, a.ngaysinh);
			getline(is, a.diachi);
			is >> a.fax >> a.ngaykyhopdong;				
			
			return is;
		}
		
		friend ostream& operator << (ostream& os, NhanVien a) {
			cout << a.id << " " << a.ten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.fax << " " << a.ngaykyhopdong << "\n";
			return os;
		}
};
	
bool cmp(NhanVien a, NhanVien b){
	string s = a.ngaysinh, w = b.ngaysinh;
	
	int ngay1 = (s[3]-'0')*10 + (s[4]-'0');
	int ngay2 = (w[3]-'0')*10 + (w[4]-'0');
	int thang1 = (s[0]-'0')*10 + (s[1]-'0');
	int thang2 = (w[0]-'0')*10 + (w[1]-'0');	
	int nam1 = stoi(s.substr(6));
	int nam2 = stoi(w.substr(6));
	
	if (nam1 != nam2)
		return nam1 < nam2;
	if (thang1 != thang2)
		return thang1 < thang2;
	return ngay1 < ngay2;
}
	
void sapxep(NhanVien a[], int n) {
	sort(a, a+n, cmp);
}
	
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}	
