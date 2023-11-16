//https://code.ptit.edu.vn/student/question/CPP0140
//So hoan hao
#include <bits/stdc++.h>
using namespace std;

int prime(long long n){
	for (int i = 2; i <= sqrt(n); ++i)
		if (n%i == 0)
			return 0;
	return n>1;
}

int check(ll n){
	ll cnt = 0;
	
	while (n%2 == 0) {
		++cnt;
		n /= 2;
	} if (n != 1)
		return 0;
	else {
		if(prime(cnt)) 
			return 1;
		return 0;
	}
}
int main(){
	int t;
	cin>>t;
	
	while(t--) {
		long long n;
		cin >> n;
			if (n%2 != 0) {
				cout<<"0\n";
			} else {
				long long x = sqrt(n*2);
			if (x*(x+1) != n*2) 
				cout<<"0\n";
		else {
			if(prime(x) && check(x+1)) 
				cout<<"1\n";
		else 
			cout<<"0\n";
			}
		}
	}
	return 0;
}
