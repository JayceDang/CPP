//https://code.ptit.edu.vn/student/question/CPP0129
//Uoc so cua giai thua
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n, k, s=0;
		cin >> n >> k;
		for(int i = k; i <= n; i += k){
			int x = i;
			while(x % k == 0) {
				s++;
				x/=k;
			}
		}
		cout << s <<endl;
	}
	
	return 0;
}
