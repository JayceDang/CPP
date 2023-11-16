//https://code.ptit.edu.vn/student/question/CPP0109
//Can bang chan le
#include <bits/stdc++.h>
using namespace std;

bool check (int a) {
	int c = 0, l = 0;
	while (a != 0) {
		if ((a%10) %2 == 0) 
			c+=1;
		else 
			l +=1;
			
		a/=10;
	}
	if (c == l)
		return 1;
	return 0;
}

int main () {
 	int n;
 	cin >> n;
 	
 	int a= pow(10, n-1);
 	int b= pow(10, n);
 	int cnt = 0;
 	
	for (int i=a; i <b; i++) {
		if (check(i)) {
			cnt ++;
			cout << i << " ";
			if (cnt % 10 == 0) 
				cout << "\n";
		}
	}
	return 0;
}
