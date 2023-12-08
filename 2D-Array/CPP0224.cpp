#include <bits/stdc++.h>
using namespace std;
 
/*
	|  (-1,-1)  |  (-1, 0) | (-1, 1) |
	|  (0, -1)  |  (0, 0)  | (0, 1)  |
	|  (1, -1)  |  (1, 0)  | (1, 1)  |
*/

int kx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int ky[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int n, m;
int a[200][200];

void loang(int i1, int j1) {
    a[i1][j1] = 0;
    for (int k = 0; k < 8; k++) {
        int i = i1 + kx[k], j = j1 + ky[k];
        if (i >= 0 && i < n && j >= 0 && j < m && a[i][j] == 1) {
            loang(i, j);
        }
    }
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    cnt++;
                    loang(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
