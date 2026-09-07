#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    map<ll,bool> mp;
    for(auto it: v){
        mp[it]= true;
    }

    for(int i = 0; i < n; ++i){
        if(mp.find(v[i] - k) != mp.end()){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

// TC: o(NlogN)