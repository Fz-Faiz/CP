#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int maxi = 0, ans = -1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }


        if (n == 1 && a[0] == 1) {
            cout << 2 << endl;
            continue;
        }

        for (int x = 2; x < maxi; x++) {
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (__gcd(x, a[i]) == 1) {
                    ans = x;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        cout << ans << endl;
    }
}
