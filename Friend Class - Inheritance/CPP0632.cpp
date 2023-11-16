//https://code.ptit.edu.vn/student/question/CPP0632
//Quan ly ban hang - 2
#include <bits/stdc++.h>
using namespace std;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

int cntKh = 1;
class KhachHang {
	public:
		friend class HoaDon;
		string idKh = "KH";
		string tenKh;
		string gtKh;
		string ngaysinh;
		string diachi;
		
	friend istream& operator >> (istream& in, KhachHang& a) {
		if (cntKh < 10)
			a.idKh += "00" + to_string(cntKh++);
		else if (cntKh < 100)
			a.idKh += "0" + to_string(cntKh++);
		else
			a.idKh += to_string(cntKh++);		
		
		scanf("\n");
		
		getline(in, a.tenKh);
		getline(in, a.gtKh);
		getline(in, a.ngaysinh);
		getline(in, a.diachi);
		
		KH[a.idKh] = a;
		
		return in;
	}
	
};

int cntMh = 1;
class MatHang {
	public:
		friend class HoaDon;
		string idMh = "MH";
		string tenMh;
		string donvi;
		long long giamua, giaban;
		
		friend istream& operator >> (istream& in, MatHang& a) {
			if(cntMh < 10)
				a.idMh += "00" + to_string(cntMh++);
			else if (cntMh < 100)
				a.idMh += "0" + to_string(cntMh++);
			else
				a.idMh += to_string(cntMh++);
				
			scanf("\n");
			getline(in, a.tenMh);
			getline(in, a.donvi);	
			in >> a.giamua >> a.giaban;	
			
			MH[a.idMh] = a;
			
			return in;
		}
		
};

int cntHd = 1;
class HoaDon {
	public:
		string idHd = "HD";
		string maKh;
		string maMh;
		long long soluong;
		long long loinhuan;
		
		friend istream& operator >> (istream& in, HoaDon& a) {
			if (cntHd < 10)
				a.idHd += "00" + to_string(cntHd++);
			else if (cntHd < 100)
				a.idHd += "0" + to_string(cntHd++);
			else
				a.idHd += to_string(cntHd++);
				
			in >> a.maKh >> a.maMh >> a.soluong;
			a.loinhuan = (MH[a.maMh].giaban-MH[a.maMh].giamua)*a.soluong;
				
			return in;		
		}
		
		friend ostream& operator << (ostream& out, HoaDon& a) {
			out << a.idHd << ' ' << KH[a.maKh].tenKh << ' ' << KH[a.maKh].diachi << ' ' << MH[a.maMh].tenMh << ' ' << a.soluong << ' ' << a.soluong*MH[a.maMh].giaban << ' ' << a.loinhuan << "\n";
			return out;
		}	
	
};

bool cmp(HoaDon a, HoaDon b) {
    return a.loinhuan >= b.loinhuan;
}

void sapxep(HoaDon a[], int n) {
	sort(a, a+n, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
