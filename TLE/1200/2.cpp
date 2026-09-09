#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];

        ll ans = 0;
        for(int i = 1; i <= 60; ++i){
            set<ll> distinctVal;
            ll k = 1 << i;
            for(int ind = 0; ind < n; ++ind){
                distinctVal.insert(a[ind]%k);
            }
            if(distinctVal.size() == 2){
                ans = k;
                break;
            }
        }

        cout << ans << endl;
    }
}