//https://code.ptit.edu.vn/student/question/CPP0614
//Danh sach doi tuong nhan vien
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
	
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
