#include <bits/stdc++.h>
using namespace std;

int cnt[10001] = {0};

bool cmp(int x, int y) {
	if (cnt[x] != cnt[y])
		return cnt[x] > cnt[y];
	else
		return x < y;
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
	
		int a[n];
		memset(cnt, 0, sizeof(cnt));
	
		for (int i = 0; i < n; ++i)	{
			cin >> a[i];
			cnt[a[i]]++;
		}
		sort(a, a + n, cmp);
	
		for (int i = 0; i < n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
