    #include<bits/stdc++.h>
    using namespace std;

    using ll = long long;
    const ll MOD = 1e9+7;
    int main(){
        int t;
        cin >> t;
        while(t--){
            ll n;
            cin >> n;

            ll ans =( n * (n+1) ) % MOD;
            ll ans2 = (ans * (4*n-1)) % MOD;
            ll ans3 = (ans2 * 337) % MOD;

            cout << ans3 << endl;

        }
    }

    // TC: O(t)