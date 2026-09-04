    #include<bits/stdc++.h>
    using namespace std;

    using ll = long long;

    void solve(){
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> ans;

        for(int i = 1; i <= n; ++i){
            ll temp = ((l+i-1)/i) * i;
            ans.push_back(temp);
            if(temp > r){
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
        for(auto it: ans){
            cout << it << " ";
        }
        cout << endl;
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }