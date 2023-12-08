#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        deque<int> w;
        vector<int> res;

        for (int i = 0; i < k; ++i) {
            while (!w.empty() && a[i] >= a[w.back()]) {
                w.pop_back();
            }
            w.push_back(i);
        }

        for (int i = k; i < n; ++i) {
            res.push_back(a[w.front()]);

            while (!w.empty() && w.front() <= i - k) {
                w.pop_front();
            }

            while (!w.empty() && a[i] >= a[w.back()]) {
                w.pop_back();
            }

            w.push_back(i);
        }

        res.push_back(a[w.front()]);

        for (int i = 0; i < res.size(); ++i) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
