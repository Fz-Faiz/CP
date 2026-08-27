#include<bits/stdc++.h>
using namespace std;

using ll = long long;
long long MOD = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        sort(begin(a),end(a));
        sort(rbegin(b), rend(b));

        ll result = 1;
        for(int i = 0; i < n; ++i){
            ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            ll count = a.size() - temp;
            result = result * max(count - i, 0LL) % MOD;
        }
        cout << result << endl;
    }

}