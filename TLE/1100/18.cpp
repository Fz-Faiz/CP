#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, c;
        cin >> n >> c;
        vector<ll> a;
        for(int i = 0; i < n; ++i){
            ll x;
            cin >> x;
            a.push_back(x+i+1);
        }

        sort(a.begin(), a.end());
        ll cnt = 0;
        int i = 0;
        while(i < n && a[i] <= c){
            c -= a[i];
            cnt++;
            i++;
        }

        cout << cnt << endl;

        
    }
}

