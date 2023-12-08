#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[505][505];

int MAX(int idx) {
    stack<int> res;
    int val, Max = 0, are = 0, i = 0;
    while(i < m) {
        if (res.empty() || a[idx][res.top()] <= a[idx][i]) res.push(i++);
        else {
            val = a[idx][res.top()];
            res.pop();
            are = val * i;
            if (!res.empty()) are = val * (i - res.top() - 1);
            Max = max(are, Max);
        }
    }
    while (!res.empty()) {
        val = a[idx][res.top()];
        res.pop();
        are = val * i;
        if (!res.empty()) are = val * (i - res.top() - 1);
        Max = max(are, Max);
    }
    return Max;
}

int calc() {
    int res = MAX(0);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            if (a[i][j]) 
                a[i][j] += a[i - 1][j];
        res = max(res, MAX(i));
    }
    return res;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];
        cout << calc() << endl;
    }

    return 0;
}