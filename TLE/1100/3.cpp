#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, a;
        cin >> n;
        vector<pair<ll,ll>> v;
        for(int i = 0; i < n; ++i){
            cin >> a;
            v.push_back({a, i});
        }

        vector<ll> pre(n);
        sort(v.begin(),v.end());

        pre[0] = v[0].first;
        for(int i = 1; i < n; ++i){
            pre[i] = pre[i-1] + v[i].first;
        }

        vector<ll> ans(n);
        for(int i = 0; i < n; ++i){
            int j = i;
            int found = i;
            while(j < n){
                pair<ll, ll> temp = {pre[j]+1, INT_MIN};
                ll idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
                idx--;
                if(j == idx) break;
                found += idx - j;
                j = idx;
            }
            ans[v[i].second] = found;
        }

        for(int i = 0; i < n; ++i){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    // TC: O(NlogN)
    // SC: O(N)
}