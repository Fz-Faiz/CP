#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int protect = 0;
        int last_one = -k; 

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {

                if (i - last_one >= k) {
                    protect++;
                    last_one = i; 
                } else {

                    last_one = i; 
                }
            }
        }

        cout << protect << "\n";
    }
    return 0;
}
