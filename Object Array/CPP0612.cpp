//https://code.ptit.edu.vn/student/question/CPP0612
//Danh sach doi tuong sinh vien - 2
#include <bits/stdc++.h>
using namespace std;

int id = 1;

class SinhVien {
	
	private:
		string Id;
		string Name;
		string Class;
		string Dob;
		double Gpa;
		
	public:
		friend istream& operator >> (istream& is, SinhVien& a);
		friend ostream& operator << (ostream& os, SinhVien a);

};

istream& operator >> (istream& in, SinhVien &a) {
	
	cin.ignore();
	getline(in, a.Name);
	//Chuan hoa ho ten
	string token, str = "";
	vector<string> v;
	
	stringstream ss(a.Name);
	
	while (ss >> token) {
		token[0] = toupper(token[0]);
		
		for (int i = 1; i < token.size(); ++i) {
			token[i] = tolower(token[i]);
		}
		v.push_back(token);
	}
	
	for (int i = 0; i < v.size(); ++i) {
		str += v[i];
		if (i != v.size()-1)
			str += " ";
	}
	
	a.Name = str;
	
	//Chuan hoa Msv
	string s = to_string(id++);
	while (s.size() < 3) {
		s = '0' + s;
		a.Id = "B20DCCN" + s;
	}
	
	in >> a.Class >> a.Dob;
	//Chuan hoa ngay sinh
	if (a.Dob[2] != '/')
		a.Dob = "0" + a.Dob;
	if (a.Dob[5] != '/')
		a.Dob = a.Dob.insert(3, "0");
	
	in >> a.Gpa;
	return in;
}

ostream& operator << (ostream& out, SinhVien a) {
	out << a.Id << ' ' << a.Name << " " << a.Class << " " << a.Dob << " " << fixed << setprecision(2) << a.Gpa << "\n";
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
