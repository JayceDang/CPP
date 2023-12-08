#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s;
    	cin >> s;
    	
    	for (int i = 0; i < s.size(); ++i) {
        	int j = i;
        	while (s[j] == s[i] && j < s.size())
            	j++;
        	cout << s[i] << j - i;
        	i = j - 1;
		}
		cout << "\n";	
	}

	return 0;
}
