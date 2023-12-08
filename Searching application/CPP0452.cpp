#include <bits/stdc++.h>
using namespace std;

void input(long long a[], int n) {
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int x, y, z;
		cin >> x >> y >> z;
	
		long long a[x], b[y], c[z];
		input(a, x);
		input(b, y);
		input(c, z);
		
		int idxA = 0, idxB = 0, idxC = 0;
		
		multiset<long long> ans;
        while(idxA < x && idxB < y && idxC < z) {
            if(a[idxA] == b[idxB] && b[idxB] == c[idxC]) {
                ans.insert(a[idxA]);
                ++idxA;
                ++idxB;
                ++idxC;
            }
            else if(a[idxA] < b[idxB]) ++idxA;
            else if(b[idxB] < c[idxC]) ++idxB;
            else ++idxC;
        }
        
        if(ans.empty()) 
			cout << -1;
        else for(auto i : ans) 
			cout << i << " ";
		cout << "\n";		
	}

	return 0;
}
