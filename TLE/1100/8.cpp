#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k, s, t;
        cin >> n >> k >> s >> t;
        vector<ll> x(n+1), y(n+1);
        for(int i = 1; i <= n; ++i){
            cin >> x[i] >> y[i];
        }

        ll ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);
        ll mins = 1e17 , mint = 1e17;
        for(int i = 1; i <= k; ++i){
            mins = min(mins, abs(x[s] - x[i]) + abs(y[s] - y[i]));
            mint = min(mint, abs(x[t] - x[i]) + abs(y[t] - y[i]));
        }
        ans = min(ans, mins+mint);
        cout << ans << endl;
    }
}