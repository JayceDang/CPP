#include <iostream>
using namespace std;

int n, b, gt;
float g;
int c[100], a[100];
int x[100], xopt[100];
int fopt;

void nhap() {
    cout << "Nhap so luong do vat: ";
    cin >> n;
    cout << "Nhap khoi luong toi da: ";
    cin >> b;
    cout << "Nhap khoi luong tung do vat: ";
    for (int i = 1; i <= n; i++) cin >> a[i];
    cout << "Nhap gia tri tung do vat: ";
    for (int i = 1; i <= n; i++) cin >> c[i];
    c[n+1]=0; a[n+1]=1;
    fopt = -1e9;
    gt = 0;
    g = 0;
}

void ghi() {
    if (gt > fopt) {
        fopt = gt;
        for (int i = 1; i <= n; i++) {
            xopt[i] = x[i];
        }
    }
}

void branchandbound(int k) {
    for (int j = b / a[k]; j >= 0; j--) {
        x[k] = j;
        gt = gt + c[k] * x[k];
        b = b - a[k] * x[k];
        g = gt + (float)((c[k + 1] * b) / a[k + 1]);
        if (k == n) {
            ghi();
        }
        else if (g > fopt) {
            branchandbound(k + 1);
        }
        gt = gt - c[k] * x[k];
        b = b + a[k] * x[k];
    }
}

void xuat() {
    cout << "Gia tri toi uu cua cac mon do vat: " << fopt << endl;
    cout << "Cac mon do vat duoc chon: ";
    for (int i = 1; i <= n; i++) {
        cout << xopt[i] << " ";
    }
    cout << endl;
}

int main() {
    nhap();
    branchandbound(1);
    xuat();

    return 0;
}