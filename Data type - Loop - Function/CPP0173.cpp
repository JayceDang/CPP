//https://code.ptit.edu.vn/student/question/CPP0173
//Chia het cho ba so nguyen
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b > 0) {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long lcm(long longL a, long long b) {
    return a * b / gcd(a, b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
    	long long x, y, z, n;
	    cin >> x >> y >> z >> n;
	    long long l = pow(10, n - 1);
	    long long r = pow(10, n) - 1;
	    long long bc = lcm(lcm(x, y), z);
	    
	    if (bc > r)
	        cout << "-1\n";
	    else if (l % bc == 0)
	        cout << l << endl;
	    else {
	        long long d = l / bc;
	        cout << bc * (d + 1) << endl;
	    }
	}
        
    return 0;
}
