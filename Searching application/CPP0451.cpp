#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n, k, x;
	    cin >> n;
	    vector<int> a(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> a[i];
	    }
	    cin >> k >> x;
	
	    int i = lower_bound(a.begin(), a.end(), x) - a.begin(), j = i;
	    for (int z = k / 2; z >= 1; --z) {
	        cout << a[i - z] << " ";
	    }
	
	    if (a[j] == x) j++;
	    for (int z = 0; z < k / 2; ++z) {
	        cout << a[j + z] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
