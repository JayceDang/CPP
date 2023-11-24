#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct PhanSo {
	ll tu;
	ll mau;
};

PhanSo tong(PhanSo p, PhanSo q) {
	PhanSo ans;
	ans.tu =  p.tu*q.mau + p.mau*q.tu;
	ans.mau = p.mau*q.mau;
	return ans;	
}

PhanSo rutgon(PhanSo& a) {
	PhanSo ans;
	ll x = __gcd(a.tu, a.mau);
	ans.tu = a.tu /= x;
	ans.mau = a.mau /= x;
	return ans;
}

void process(PhanSo a, PhanSo b) {
	PhanSo c = tong(a, b);
	c.tu *= c.tu;
	c.mau *= c.mau;
	
	PhanSo ans = c;
	rutgon(ans);
	cout << ans.tu << "/" << ans.mau << " ";
	
	PhanSo d;
	d.tu = c.tu * a.tu * b.tu;
	d.mau = c.mau * a.mau * b.mau;
	
	rutgon(d);
	cout << d.tu << "/" << d.mau << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
