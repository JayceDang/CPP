#include <bits/stdc++.h>
using namespace std;

bool checkMountain(int a[], int l, int r) {
	while (l <= r && a[l] <= a[l + 1])
        l++;
    l++;
    while (l <= r && a[l] <= a[l - 1])
        l++;
	
	return l > r;
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		
		for (auto &x : a)
			cin >> x;
			
		int l, r;
		cin >> l >> r;
		
		if (checkMountain(a, l, r))
			cout << "Yes\n";
		else 
			cout << "No\n";

	}

	return 0;
}
