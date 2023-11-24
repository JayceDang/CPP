#include <bits/stdc++.h>
using namespace std;

int soKhach=1, soHang=1, soDon=1;
class KhachHang;
class MatHang;
class HoaDon;

map<string,KhachHang> Khach;
map<string,MatHang> Hang;

string chuanhoa(string s){
	stringstream ss(s);
	string word;
	string ans="";
	while(ss>>word){
		for (int i=0;i<word.size();i++){
			word[i]=tolower(word[i]);
		}
		word[0]=toupper(word[0]);
		ans=ans + word+" ";
	}
	ans.pop_back();
	return ans;
}
class KhachHang{
	public:
		string maKhach;
		string tenKhach;
		string gioitinh;
		string ngaysinh;
		string diachi;
	
		friend istream &operator>>(istream &in, KhachHang a){
			string temp=to_string(soKhach);
			while(temp.size()<3) temp="0"+temp;
			a.maKhach="KH"+temp;
			in>>ws;
			getline(in,a.tenKhach);
			a.tenKhach=chuanhoa(a.tenKhach);
			in>>ws;
			getline(in,a.gioitinh);
			in>>ws;
			getline(in,a.ngaysinh);
			in>>ws;
			getline(in,a.diachi);
			Khach[a.maKhach]=a;
			soKhach++;
			return in;
		}
};

class MatHang{
	public:
		string maHang;
		string tenHang;
		string donvi;
		long long int giamua, giaban;
		
		friend istream &operator>>(istream &in, MatHang a){
			string temp=to_string(soHang);			
			while(temp.size()<3) temp="0"+temp;
			a.maHang="MH"+temp;
			in>>ws;
			getline(in,a.tenHang);
			in>>ws;
			getline(in,a.donvi);
			in>>ws;
			in>>a.giamua>>a.giaban;
			Hang[a.maHang]=a;
			soHang++;
			return in;
		}	
};

class HoaDon{
	public:
		string maDon;
		string maKhach;
		string maHang;
		long long int soluong;
		long long int thanhtien;
		
		friend istream &operator>>(istream &in, HoaDon &a){
			string temp=to_string(soDon);
			while(temp.size()<3) temp="0"+temp;
			a.maDon="HD"+temp;		
			in>>ws;
			in>>a.maKhach;
			in>>ws;
			in>>a.maHang;
			in>>a.soluong;
			soDon++;
			return in;
		}
		friend ostream &operator<<(ostream &out, HoaDon &a){
			KhachHang khachhang=Khach[a.maKhach];
			MatHang mathang=Hang[a.maHang];
			out<<a.maDon<<" "<<khachhang.tenKhach<<" "<<khachhang.diachi<<" "<<mathang.tenHang<<" "<<mathang.donvi<<" "<<mathang.giamua<<" "<<mathang.giaban<<" "<<a.soluong<<" "<<mathang.giaban*a.soluong<<"\n";
			return out;
		}
};

 
int main(){
	ifstream fk{"KH.in"};
	ifstream fm{"MH.in"};
	ifstream fd{"HD.in"};
	int k,m,d;
	fk>>k;
	fk>>ws;
	fm>>m;
	fk>>ws;
	fd>>d;
	fk>>ws;
	KhachHang kh[k]; MatHang mh[m]; HoaDon hd[d];
	for (int i=0;i<k;i++){
		fk>>kh[i];
	}
	for (int i=0;i<m;i++){
		fm>>mh[i];
	}
	for (int i=0;i<d;i++){
		fd>>hd[i];
	}
	for (int i=0;i<d;i++){
		cout<<hd[i];
	}
	fk.close(); fm.close(); fd.close();
}
