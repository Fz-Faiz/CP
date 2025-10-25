#include <bits/stdc++.h>
using namespace std;

int n;
string s;
unordered_map<long long, long long> memo[20]; // memo[idx][x] = seconds

long long dfs(long long x, int idx) {
    if (x == 0) return 0;
    if (memo[idx].count(x)) return memo[idx][x];

    long long next;
    if (s[idx] == 'A') next = dfs(x - 1, (idx + 1) % n);
    else next = dfs(x / 2, (idx + 1) % n);

    return memo[idx][x] = 1 + next;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> n >> q;
        cin >> s;
        vector<long long> a(q);
        for (int i = 0; i < q; i++) cin >> a[i];

        // clear memo
        for (int i = 0; i < n; i++) memo[i].clear();

        for (int i = 0; i < q; i++) {
            cout << dfs(a[i], 0) << "\n";
        }
    }
}
