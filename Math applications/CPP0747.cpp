#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		string s;
		cin >> s;
		int zero = 0, cnt = 0;
		for(int i = s.size()-1; i >= 0 ; i--){
			if(s[i] == '0') ++zero;
			else {
				if(zero > 1) {
					cnt += 3;
					zero -= 2;
				}
			}
		}
		cout << cnt <<"\n";
	}
	return 0;
}
