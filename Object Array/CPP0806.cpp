//https://code.ptit.edu.vn/student/question/CPP0806
//Quan ly ban hang - 3
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
	
};

int cntMh = 1;
class MatHang {
	public:
		friend class HoaDon;
		string idMh = "MH";
		string tenMh;
		string donvi;
		long long giamua, giaban;
		
};

int cntHd = 1;
class HoaDon {
	public:
		string idHd = "HD";
		string maKh;
		string maMh;
		long long soluong;
		long long loinhuan;

};

bool cmp(HoaDon a, HoaDon b) {
    return a.loinhuan >= b.loinhuan;
}

void sapxep(HoaDon a[], int n) {
	sort(a, a+n, cmp);
}

int main(){
	
	ifstream inKh("KH.in");
	ifstream inMh("MH.in");
	ifstream inHd("HD.in");
	
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    
    int N,M,K,i;
    
    inKh >> N;
    inKh.ignore();
    for(i=0;i<N;i++) {
    	if (cntKh < 10)
			dskh[i].idKh += "00" + to_string(cntKh++);
		else if (cntKh < 100)
			dskh[i].idKh += "0" + to_string(cntKh++);
		else
			dskh[i].idKh += to_string(cntKh++);		
		
		inKh.ignore();			
		getline(inKh, dskh[i].tenKh);
		inKh.ignore();
		getline(inKh, dskh[i].gtKh);
		inKh.ignore();
		getline(inKh, dskh[i].ngaysinh);
		inKh.ignore();
		getline(inKh, dskh[i].diachi);
		
		KH[dskh[i].idKh] = dskh[i];
	} 
	
    inMh >> M;
    inMh.ignore();
    for(i=0;i<M;i++) {
    	if(cntMh < 10)
			dsmh[i].idMh += "00" + to_string(cntMh++);
		else if (cntMh < 100)
			dsmh[i].idMh += "0" + to_string(cntMh++);
		else
			dsmh[i].idMh += to_string(cntMh++);
		
		inMh.ignore();
		getline(inMh, dsmh[i].tenMh);
		inMh.ignore();
		getline(inMh, dsmh[i].donvi);	
		inMh.ignore();
		inMh >> dsmh[i].giamua;
		inMh.ignore();
		inMh >> dsmh[i].giaban;
		inMh.ignore();	
		
		MH[dsmh[i].idMh] = dsmh[i];
	} 
    
    inHd >> K;
    inHd.ignore();
    for(i=0;i<K;i++) {
    	if (cntHd < 10)
			dshd[i].idHd += "00" + to_string(cntHd++);
		else if (cntHd < 100)
			dshd[i].idHd += "0" + to_string(cntHd++);
		else
			dshd[i].idHd += to_string(cntHd++);
		
		inHd.ignore();				
		inHd >> dshd[i].maKh;
		inHd.ignore();
		inHd >> dshd[i].maMh;
		inHd.ignore();
		inHd >> dshd[i].soluong;
		dshd[i].loinhuan = (MH[dshd[i].maMh].giaban-MH[dshd[i].maMh].giamua)*dshd[i].soluong;
	}

    for(i=0;i<K;i++) {
    	cout << dshd[i].idHd << ' ' << KH[dshd[i].maKh].tenKh << ' ' << KH[dshd[i].maKh].diachi << ' ' << MH[dshd[i].maMh].tenMh << ' ' << MH[dshd[i].maMh].donvi << " " << MH[dshd[i].maMh].giamua << " " << MH[dshd[i].maMh].giaban << " " << dshd[i].soluong << " " << dshd[i].soluong*MH[dshd[i].maMh].giaban << "\n";
	} 
    
    inKh.close();
    inMh.close();
    inHd.close();
    
    return 0;
}
