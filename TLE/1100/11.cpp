#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> prefixSum(n);
        prefixSum[0] = a[0];
        for(int i = 1; i < n; ++i){
            prefixSum[i] = a[i] + prefixSum[i-1];
        }
        ll ans = 0;
        
        for(int first = 0; first <= k; ++first){
            int second = k - first;
            int left = 2 * first;
            int right = n - second - 1;
            ll sum = prefixSum[right] - (left == 0 ? 0 : prefixSum[left-1]);
            ans = max(ans, sum);
        }
        
        cout << ans << endl;
    }
}