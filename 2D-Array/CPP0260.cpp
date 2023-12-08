#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    
    int a[n][n], tmp[n*n + 1];
    int ed = n * n;
    for (int i = 1; i <= ed; ++i) 
		cin >> tmp[i];
		
    sort(tmp + 1, tmp + ed + 1);
    
    int soHang = n, soCot = n;
    
    int vtHang = 0, vtCot = 0;
    while(cnt <= n * n) {
        for(int i = vtCot; i < soCot; i++) {
            a[vtHang][i] = tmp[cnt++];
        }
        
        for(int i = vtHang + 1; i < soHang; i++) {
            a[i][soCot - 1] = tmp[cnt++];
        }
        
        for(int i = soCot - 2; i >= vtCot; i--) {
            a[soHang - 1][i] = tmp[cnt++];
        }
        
        for(int i = soHang - 2; i > vtHang; i--) {
            a[i][vtCot] = tmp[cnt++];
        }    
        vtHang++;
        vtCot++;
        soHang--;
        soCot--;       
    }
    
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
        	cout << a[i][j] << " ";
		}			
        cout << endl;
    }
    return 0;
}
